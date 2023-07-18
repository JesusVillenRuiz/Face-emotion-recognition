#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from pers_msgs.msg import Caramsg
from cv_bridge import CvBridge
from statistics import mode
import numpy as np
import tensorflow as tf
import cv2
import asyncio
import time
from telegram import Bot
import tempfile
import PIL
from PIL import ImageDraw, ImageFont


async def enviar_foto_SinResponder(foto, mensaje):
    """
    Esta función se encarga de enviar una foto sin necesidad de que el usuario
    le responda o se la sollicite.

    Args:
        mensaje: Texto que indica que se ha detectado a la persona X con una emoción negativa.
    """
    # Guarda ndarray como un fichero imagen
    temp_filename = tempfile.mktemp(suffix='.png')
    cv2.imwrite(temp_filename, foto)

    # Envía la imagen
    with open(temp_filename, 'rb') as photo_file:
        bot = Bot(token="6297274661:AAENxh-QOD5rfevbHUe1gWhqGmljzeJMCbY")
        await bot.send_photo(chat_id=761096513, photo=photo_file, caption=mensaje)


class ImageSubscriberNode(Node):
    def __init__(self):
        super().__init__('image_subscriber_node')
        print("Iniciando... \n")
        self.bridge = CvBridge()
        
        # Configuración de la suscripción al topic /cara que recibe mensajes de tipo CaraMsg.
        # CaraMsg es un mensaje personalizado que contiene un arreglo de imágenes de caras, la imagen captada por la cámara,
        # las coordenadas de las caras detectadas y los nombres de las personas detectadas.
        self.subscription_img = self.create_subscription(Caramsg, '/face', self.image_callback, 10)

        # Configuración de la publicación al topic /image que envía la imagen final con las emociones detectadas.
        self.publisher = self.create_publisher(Image, '/detection', 10)
        
        package_path = os.path.dirname(os.path.abspath(__file__))

        # Cargar el modelo de la red neuronal
        model_path = os.path.join(package_path, 'modeloSS.h5')
        self.model = tf.keras.models.load_model(model_path)

        # Diccionario de emociones
        self.emotions_dict = {
            0: ('Angry 😡', (255, 51, 0)),
            1: ('Disgusted 😒', (0, 204, 0)),
            2: ('Fearful 😨', (51, 153, 255)),
            3: ('Happy 🙂', (255, 255, 0)),
            4: ('Neutral 😐', (255, 255, 255)),
            5: ('Sad 😢', (0, 0, 255)),
            6: ('Surprised 😯', (200, 0, 200))
        }

        # Lista de emociones negativas
        self.bad_emotions = ["Angry 😡", "Disgusted 😒", "Fearful 😨", "Sad 😢"]

        self.tiempos_dict = {}
        self.emotions_list = {}

        # Cargar la fuente para poder usar tildes
        self.fontpath = os.path.join(package_path, 'Roboto-Light.ttf')
        self.font = ImageFont.truetype(self.fontpath, 12)

        # Tiempo de espera para enviar una nueva foto de aviso
        self.intervalo = 60  # segundos
        print("En cuanto se reciba una imagen comenzará la predicción de emociones... \n")

    def image_callback(self, msg):
        # Convertir el mensaje de tipo Caramsg a un arreglo de imágenes para poder usarla por opencv
        frame = self.bridge.imgmsg_to_cv2(msg.frame, desired_encoding='rgb8')

        indice = 0

        # Iterar sobre el arreglo de caras
        for caramsg in msg.caras:

            # Obtener el nombre de la persona detectada
            nombre = msg.names[indice]

            # Obtener la cara detectada
            cara = self.bridge.imgmsg_to_cv2(caramsg, desired_encoding='rgb8')

            # Transformar la imagen a escala de grises y ajustar su tamaño para el modelo
            final_image = cv2.resize(cara, (224, 224))
            final_image = np.expand_dims(final_image, axis=0)
            final_image = final_image / 255.0

            # Realizar la predicción de la emoción en la imagen
            predictions = self.model.predict(final_image)

            # Encuentra el valor mínimo y máximo
            min_value = np.min(predictions)
            max_value = np.max(predictions)

            # Normalización utilizando escalamiento min-max
            normalized_predictions = [(x - min_value) / (max_value - min_value) for x in predictions]
            # print(normalized_predictions)

            # Obtener el arreglo de predicciones dentro de la lista
            prediction_array = normalized_predictions[0]

            # Iterar sobre el diccionario de emociones
            for index, (emotion_name, _) in self.emotions_dict.items():
                # Obtener el valor de la predicción correspondiente al índice de la emoción
                prediction_value = prediction_array[index]
                # Imprimir la emoción y su predicción
                print(f"{emotion_name}: {prediction_value:.5f}")

            # Obtener el índice de la emoción con mayor probabilidad
            maximo = np.argmax(normalized_predictions)

            # Si el nombre de la persona no está en el diccionario, lo agrega
            if nombre not in self.emotions_list:
                self.emotions_list[nombre] = [maximo]
            else:
                # Si el nombre de la persona está en el diccionario, agrega la emoción a la lista
                self.emotions_list[nombre].append(maximo)

            # Si hay más de 10 emociones en la lista, elimina la emoción más antigua
            if len(self.emotions_list[nombre]) > 10:
                self.emotions_list[nombre].pop(0)

            # Calcula la moda de las emociones en la lista
            mode_emotion = mode(self.emotions_list[nombre])

            # Obtener el texto y color de la emoción
            texto = self.emotions_dict[mode_emotion][0]
            color = self.emotions_dict[mode_emotion][1]

            # Si la emoción es negativa y la persona no es desconocida, envía la foto al bot de telegram
            if texto in self.bad_emotions:
                caption = f"{nombre} has been detected with {texto} emotion on the date and time: {str(time.asctime())}"

                # Si la persona no es desconocida y ha pasado el tiempo de espera, envía la foto
                if nombre != 'Unknown' and (nombre not in self.tiempos_dict or (time.time() - self.tiempos_dict[nombre] > self.intervalo)):
                    self.tiempos_dict[nombre] = time.time()
                    # y mandas todo al bot de telegram con el caption y la foto
                    asyncio.run(enviar_foto_SinResponder(cara, caption))

            # Si el texto no está vacío, dibuja el texto en la imagen
            if texto != "":
                (top, right, bottom, left) = msg.top[indice], msg.right[indice], msg.bottom[indice], msg.left[indice]
                indice += 1
                img_pil = PIL.Image.fromarray(frame)
                draw = ImageDraw.Draw(img_pil)
                self.font = ImageFont.truetype(self.fontpath, int((right - left) / 5))
                textwidth, textheight = draw.textsize(texto.split()[0], self.font)

                draw.text((left, top - textheight), texto.split()[0], font=self.font, fill=color, stroke_width=1)
                frame = np.array(img_pil)

        # Publicar la imagen con el texto dibujado
        pub_msg = self.bridge.cv2_to_imgmsg(frame, encoding='rgb8')
        self.publisher.publish(pub_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriberNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
