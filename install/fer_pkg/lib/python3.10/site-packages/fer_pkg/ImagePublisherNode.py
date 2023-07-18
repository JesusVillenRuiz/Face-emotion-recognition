#!/usr/bin/env python3
import os
import time
import rclpy
import face_recognition
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from pers_msgs.msg import Caramsg
from pers_msgs.msg import NuevoUsuariomsg
from cv_bridge import CvBridge
import cv2
import PIL
from PIL import ImageFont, ImageDraw
import telebot

TELEGRAM_TOKEN = '6297274661:AAENxh-QOD5rfevbHUe1gWhqGmljzeJMCbY'
CHAT_ID = 761096513

def is_image_blurry(image):
    """
    Comprueba si una imagen está borrosa basándose en la varianza del Laplaciano.

    Args:
        image: Imagen en formato BGR.

    Returns:
        bool: True si la imagen está borrosa, False en caso contrario.
    """
    # Convertir la imagen a escala de grises
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # Calcular la varianza de Laplaciano
    laplacian_var = cv2.Laplacian(gray, cv2.CV_64F).var()

    # Si la varianza de Laplaciano es menor que un umbral, consideramos la imagen como borrosa
    threshold = 160
    if laplacian_var < threshold:
        return True
    else:
        return False

class ImagePublisherNode(Node):
    def __init__(self):
        super().__init__('image_publisher')
        print("Iniciando... \nEn un momento comenzará la detección facial...")

        # Configuración de publicación de imágenes
        self.publisher_img = self.create_publisher(Caramsg, '/face', 10)
        self.subscription_img = self.create_subscription(Image, '/image_raw', self.timer_callback, 10)


        # Configuración del temporizador para el procesamiento de imágenes
        # timer_period = 0.1  # tiempo en segundos
        # self.timer = self.create_timer(timer_period, self.timer_callback)

        # Configuración de las suscripciones
        self.subscription_nuevo_usuario = self.create_subscription(
            NuevoUsuariomsg, '/new_user_bot', self.crear_callback, 10)
        self.subscription_borrar_usuario = self.create_subscription(
            String, '/delete_user_bot', self.borrar_callback, 10)

        # Configuración del puente para convertir entre ROS y OpenCV
        self.bridge = CvBridge()

        # Configuración de la captura de video
        # self.cap = cv2.VideoCapture(2)

        # Configuración de reconocimiento facial
        package_path = os.path.dirname(os.path.abspath(__file__))
        
        # Load a sample picture and learn how to recognize it.z
        person1_path = os.path.join(package_path, 'Yo.png')
        person1_image = face_recognition.load_image_file(person1_path)
        person1_face_encoding = face_recognition.face_encodings(person1_image)[0]
        
        # Create arrays of known face encodings and their names
        self.known_face_encodings = [person1_face_encoding]
        self.known_face_names = ["Jesús Villén"]

        # Variables para almacenar los resultados de la detección facial
        self.face_locations = []
        self.face_encodings = []
        self.face_names = []
        self.process_this_frame = True
        self.mensaje = Caramsg()

        # Fuente para poder unsar tildes en el texto
        self.fontpath = os.path.join(package_path, 'Roboto-Light.ttf')
        self.font = ImageFont.truetype(self.fontpath, 12)

        # Configuración del bot de Telegram
        self.bot = telebot.TeleBot(TELEGRAM_TOKEN)

        # Variables para el aviso de malas emociones
        self.ultimo_aviso = 0
        self.aviso = False

        print("Publicando... \nCtrl + c para terminar.")

    def timer_callback(self, msg):
        """
        Callback para el temporizador que procesa las imágenes del video.
        """
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Por cada frame se inicializa el número de caras desconocidas a 0
        ncaras_unkn = 0

        # Se procesa un frame si uno no para ser más eficientes
        if self.process_this_frame:
        
            # Se convierte la imagen de color BGR (que utiliza OpenCV) a color RGB (que utiliza face_recognition)
            rgb_small_frame = frame[:, :, ::-1]

            # Se encuentra la ubicación de las caras y se codifican
            self.face_locations = face_recognition.face_locations(rgb_small_frame)
            self.face_encodings = face_recognition.face_encodings(rgb_small_frame, self.face_locations)
            self.face_names = []

            # Se recorren las caras encontradas
            for self.face_encoding in self.face_encodings:

                # Se compara la cara encontrada con las caras conocidas
                matches = face_recognition.compare_faces(self.known_face_encodings, self.face_encoding)
                
                name = "Unknown"

                # Se calcula la distancia entre la cara encontrada y las caras conocidas
                face_distances = face_recognition.face_distance(self.known_face_encodings, self.face_encoding)

                # Se obtiene el índice de la cara conocida con menor distancia
                best_match_index = np.argmin(face_distances)

                # Si la cara encontrada coincide con alguna de las caras conocidas, se obtiene su nombre
                if matches[best_match_index]:
                    name = self.known_face_names[best_match_index]
                
                # Si la cara encontrada no coincide con ninguna de las caras conocidas, se incrementa el número de caras desconocidas
                if name == "Unknown":
                    ncaras_unkn += 1

                # Se añade el nombre de la cara encontrada a la lista de nombres
                self.face_names.append(name)

        self.process_this_frame = not self.process_this_frame

        # Se prepara el mensaje personalizado para cada cara encontrada
        caras = []
        msg_top = []
        msg_right = []
        msg_bottom = []
        msg_left = []

        # Se recorren las caras encontradas
        for (top, right, bottom, left), name in zip(self.face_locations, self.face_names):
            caracv = frame[top:bottom, left:right]
            cara = self.bridge.cv2_to_imgmsg(caracv, "rgb8")
            caras.append(cara)
            msg_top.append(top)
            msg_right.append(right)
            msg_bottom.append(bottom)
            msg_left.append(left)

            # Si la cara encontrada es desconocida, se envía un mensaje de aviso por telegram
            if (name == 'Unknown' and (time.time() - self.ultimo_aviso) >= 20) and (not is_image_blurry(caracv)):
                print("He visto a alguien que no conozco")
                # Guardar la imagen en local
                cv2.imwrite('imagen.jpg', caracv)

                # Cargar la imagen guardada
                foto = open('imagen.jpg', 'rb')

                # Registra un nuevo usuario en el sistema
                self.bot.send_photo(CHAT_ID, foto, caption='¡Hola! He visto a alguien que creo no conocer, quizás sea la primera vez que lo haya visto o quizás haya sido un fallo mío... \nPor favor en caso de ser alguien nuevo, ¿podría usar el comando /registrar_usuario para que lo conozca la próxima vez que lo vea?') # Enviamos la imagen

                # Cerrar la foto
                foto.close()

                # Eliminar la imagen local
                os.remove('imagen.jpg')

                self.aviso = True

            # Se dibuja un rectángulo alrededor de la cara encontrada
            cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)

            # Se dibuja un rectángulo debajo del nombre de la cara encontrada
            img_pil = PIL.Image.fromarray(frame)
            draw = ImageDraw.Draw(img_pil)
            self.font = ImageFont.truetype(self.fontpath, int((right - left) / 5))
            textwidth, textheight = draw.textsize(name, self.font)
            bbox = (left, bottom, left + textwidth, bottom + textheight)

            # Dibuja el rectángulo detrás del texto
            draw.rectangle(bbox, fill=(0, 0, 255))

            # Dibuja el nombre sobre el rectángulo
            draw.text((left, bottom), name, font=self.font, fill=(255, 255, 255))
            frame = np.array(img_pil)

        # Si se ha avisado
        if self.aviso:
            self.unknowns_before = ncaras_unkn
            self.ultimo_aviso = time.time()
            self.aviso = False

        msg_caras = caras
        msg_frame = self.bridge.cv2_to_imgmsg(frame, "bgr8")

        self.mensaje.caras = msg_caras
        self.mensaje.frame = msg_frame
        self.mensaje.top = msg_top
        self.mensaje.right = msg_right
        self.mensaje.bottom = msg_bottom
        self.mensaje.left = msg_left
        self.mensaje.names = self.face_names


        self.publisher_img.publish(self.mensaje)

    def borrar_callback(self, msg):
        """
        Callback para la suscripción de borrado de usuarios.
        Elimina un usuario de la lista de reconocimiento facial.

        Args:
            msg: Mensaje que contiene el nombre del usuario a borrar.
        """
        nombre = msg.data
        indice = self.known_face_names.index(nombre)
        self.known_face_names.remove(nombre)
        del self.known_face_encodings[indice]

    def crear_callback(self, msg):
        """
        Callback para la suscripción de creación de usuarios.
        Agrega un nuevo usuario a la lista de reconocimiento facial.

        Args:
            msg: Mensaje que contiene el nombre y la imagen del usuario a crear.
        """
        nombre = msg.nombre
        cara = self.bridge.imgmsg_to_cv2(msg.frame, desired_encoding='rgb8')
        person_face_encoding = face_recognition.face_encodings(cara)[0]

        self.known_face_encodings.append(person_face_encoding)
        self.known_face_names.append(nombre)



def main(args=None):
    rclpy.init(args=args)
    node = ImagePublisherNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
