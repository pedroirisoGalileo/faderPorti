# Controlador USB FaderPorti

## Descripción

El Controlador USB FaderPorti es un proyecto basado en Arduino diseñado para proporcionar una interfaz de control MIDI utilizando encoders y botones. Este proyecto permite a los usuarios controlar varios parámetros en su estación de trabajo de audio digital (DAW) a través de mensajes MIDI.

## Características

- Comunicación MIDI por USB
- Dos encoders rotativos para ajuste de parámetros
- Múltiples botones para controles de transporte (reproducir, pausar, grabar, etc.)
- Entradas de botones con rebote eliminado para una operación confiable

## Instrucciones de Configuración

1. **Requisitos de Hardware**
   - Placa Arduino (compatible con MIDI por USB)
   - Encoders rotativos
   - Botones pulsadores
   - Cables de puente
   - Protoboard (opcional)

2. **Requisitos de Software**
   - IDE de Arduino
   - Biblioteca USB-MIDI
   - Biblioteca Encoder
   - Biblioteca Bounce2

3. **Pasos de Instalación**
   - Clona o descarga el repositorio.
   - Abre el archivo `faderPortiUSB.ino` en el IDE de Arduino.
   - Instala las bibliotecas requeridas a través del Administrador de Bibliotecas.
   - Conecta los componentes de hardware según las definiciones de pines en el código.
   - Sube el código a tu placa Arduino.

## Uso

- Una vez que el código esté subido, conecta el Arduino a tu computadora.
- Abre tu DAW preferida y configúrala para reconocer el FaderPorti como un dispositivo de entrada MIDI.
- Usa los encoders para ajustar parámetros y los botones para controlar la reproducción y grabación.

## Información Adicional

Para la documentación en inglés, consulta `README_EN.md`. Para cualquier problema o contribución, revisa el repositorio principal o contacta al mantenedor del proyecto.

## Capturas de Pantalla

![imagenes](docs/images)


## Proyecto en 3D

Puedes descargar e imprimir la caja para el controlador desde el siguiente enlace: [FaderPorti USB Box en Tinkercad](https://www.tinkercad.com/things/cjWDqjR7V7j-faderporti-usb-box?sharecode=X4At-7BB9CBkAALtWwc4YwsMeTGp326zvozLMah07FM)

## Video de Funcionamiento

![Video de Funcionamiento](funcionamiento.mp4)
