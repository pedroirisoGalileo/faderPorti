# Controlador USB FaderPortiSB MIDI Controller

## Descripción

El Controlador USB FaderPorti es un proyecto basado en Arduino diseñado para proporcionar una interfaz de control MIDI utilizando encoders y botones. Este proyecto permite a los usuarios controlar varios parámetros en su estación de trabajo de audio digital (DAW) a través de mensajes MIDI.y botones. Este proyecto permite a los usuarios controlar varios parámetros en su estación de trabajo de audio digital (DAW) a través de mensajes MIDI. Es ideal para músicos, productores y cualquier persona interesada en la creación de música digital.

## Característicasticas

- Comunicación MIDI por USBión MIDI por USB**: Permite la integración directa con cualquier software compatible con MIDI.
- Dos encoders rotativos para ajuste de parámetross**: Para el ajuste preciso de parámetros.
- Múltiples botones para controles de transporte (reproducir, pausar, grabar, etc.)s botones**: Para controles de transporte como reproducir, pausar, grabar, etc.
- Entradas de botones con rebote eliminado para una operación confiables de botones con rebote eliminado**: Para una operación confiable y precisa.
bilidad**: Funciona con cualquier DAW que soporte dispositivos MIDI.
## Instrucciones de Configuración

1. **Requisitos de Hardware**
   - Placa Arduino (compatible con MIDI por USB)pines utilizada en este proyecto:
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
   - Abre el archivo `faderPortiUSB.ino` en el IDE de Arduino
   - Instala las bibliotecas requeridas a través del Administrador de Bibliotecas.
   - Conecta los componentes de hardware según las definiciones de pines en el código.



## Video de Funcionamiento
![Video de Funcionamiento](funcionamiento.mp4)



## Proyecto en 3D!
Puedes descargar e imprimir la caja para el controlador desde el siguiente enlace: 
[FaderPorti USB Box en Tinkercad](https://www.tinkercad.com/things/cjWDqjR7V7j-faderporti-usb-box?sharecode=X4At-7BB9CBkAALtWwc4YwsMeTGp326zvozLMah07FM)



## Capturas de Pantalla
![IMAGES](docs/images)


Para la documentación en inglés, consulta `README_EN.md`. Para cualquier problema o contribución, revisa el repositorio principal o contacta al mantenedor del proyecto.## Información Adicional- Usa los encoders para ajustar parámetros y los botones para controlar la reproducción y grabación.- Abre tu DAW preferida y configúrala para reconocer el FaderPorti como un dispositivo de entrada MIDI.- Una vez que el código esté subido, conecta el Arduino a tu computadora.

## Requisitos

## Pinout

The following table details the pin configuration used in this project:

| Component          | Arduino Pin |
|--------------------|-------------|
| Encoder 1 (Right)  | 5           |
| Encoder 1 (Left)   | 6           |
| Encoder 1 Button   | 7           |
| Encoder 2 (Right)  | 2           |
| Encoder 2 (Left)   | 3           |
| Encoder 2 Button   | 4           |
| Cursor Forward Button | 8        |
| Cursor Back Button | 9           |
| Mute Button        | 10          |
| Rec Button         | 16          |
| Solo Button        | 14          |
| Pause Button       | 15          |
| Play Button        | A1          |
| FF Button          | A2          |
| Rew Button         | A3          |
| General Rec Button | A0          |

### Hardware

- Placa Arduino (compatible con MIDI por USB, como Arduino Leonardo o Arduino Micro)
- Encoders rotativos
- Botones pulsadores
- Cables de puente
- Protoboard (opcional)

### Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- Bibliotecas de Arduino:
  - [USB-MIDI](https://github.com/lathoub/Arduino-USBMIDI)
  - [Encoder](https://www.pjrc.com/teensy/td_libs_Encoder.html)
  - [Bounce2](https://github.com/thomasfredericks/Bounce2)

## Instalación

1. **Clonar el Repositorio**
    ```sh
    git clone https://github.com/tu-usuario/faderporti-usb-midi-controller.git
    cd faderporti-usb-midi-controller
    ```

2. **Abrir el Proyecto en el IDE de Arduino**
    - Abre el archivo [faderPortiUSB.ino](http://_vscodecontentref_/0) en el IDE de Arduino.

3. **Instalar las Bibliotecas Necesarias**
    - Utiliza el Administrador de Bibliotecas del IDE de Arduino para instalar las bibliotecas USB-MIDI, ENCODER y BOUNCE2

4. **Conectar los Componentes de Hardware**
    - Conecta los encoders y botones a los pines especificados en la sección de Pinout.

5. **Subir el Código a la Placa Arduino**
    - Selecciona la placa y el puerto adecuados en el IDE de Arduino.
    - Sube el código a tu placa Arduino.

## Uso

- **Conectar a la Computadora**
  - Una vez que el código esté cargado, conecta el Arduino a tu computadora mediante un cable USB.

- **Configurar la DAW**
  - Abre tu DAW preferida y configúrala para reconocer el FaderPorti como un dispositivo de entrada MIDI.

- **Controlar la DAW**
  - Usa los encoders para ajustar parámetros y los botones para controlar la reproducción, grabación y otras funciones.

## Contribuciones

¡Las contribuciones son bienvenidas! Si tienes alguna mejora o corrección, por favor abre un issue o envía un pull request.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo LICENSE para más detalles.

## Documentación Adicional

- Documentación en Inglés
- Documentación en Español

## Capturas de Pantalla

![imagenes](docs/images)

## Proyecto en 3D

Puedes descargar e imprimir la caja para el controlador desde el siguiente enlace: [FaderPorti USB Box en Tinkercad](https://www.tinkercad.com/things/cjWDqjR7V7j-faderporti-usb-box?sharecode=X4At-7BB9CBkAALtWwc4YwsMeTGp326zvozLMah07FM)

## Video de Funcionamiento

![Video de Funcionamiento](docs/funcionamiento.mp4)

## Contacto

Para cualquier consulta o sugerencia, puedes contactar al mantenedor del proyecto a través de [tu-email@example.com](mailto:tu-email@example.com).

---

# FaderPorti USB MIDI Controller

## Project Description

The **FaderPorti USB MIDI Controller** is an Arduino-based project designed to provide a MIDI controller interface using encoders and buttons. This project allows users to control various parameters in their digital audio workstation (DAW) through MIDI messages. It is ideal for musicians, producers, and anyone interested in digital music creation.

## Features

- **USB MIDI Communication**: Allows direct integration with any MIDI-compatible software.
- **Two Rotary Encoders**: For precise parameter adjustment.
- **Multiple Buttons**: For transport controls like play, pause, record, etc.
- **Debounced Button Inputs**: For reliable and accurate operation.
- **Compatibility**: Works with any DAW that supports MIDI devices.

## Pinout

The following table details the pin configuration used in this project:

| Component          | Arduino Pin |
|--------------------|-------------|
| Encoder 1 (Right)  | 5           |
| Encoder 1 (Left)   | 6           |
| Encoder 1 Button   | 7           |
| Encoder 2 (Right)  | 2           |
| Encoder 2 (Left)   | 3           |
| Encoder 2 Button   | 4           |
| Cursor Forward Button | 8        |
| Cursor Back Button | 9           |
| Mute Button        | 10          |
| Rec Button         | 16          |
| Solo Button        | 14          |
| Pause Button       | 15          |
| Play Button        | A1          |
| FF Button          | A2          |
| Rew Button         | A3          |
| General Rec Button | A0          |

## Requirements

### Hardware

- Arduino board (compatible with USB MIDI, such as Arduino Leonardo or Arduino Micro)
- Rotary encoders
- Push buttons
- Jumper wires
- Breadboard (optional)

### Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- Arduino libraries:
  - [USB-MIDI](https://github.com/lathoub/Arduino-USBMIDI)
  - [Encoder](https://www.pjrc.com/teensy/td_libs_Encoder.html)
  - [Bounce2](https://github.com/thomasfredericks/Bounce2)

## Installation

1. **Clone the Repository**
    ```sh
    git clone https://github.com/your-username/faderporti-usb-midi-controller.git
    cd faderporti-usb-midi-controller
    ```

2. **Open the Project in Arduino IDE**
    - Open the [faderPortiUSB.ino](http://_vscodecontentref_/4) file in the Arduino IDE.

3. **Install Required Libraries**
    - Use the Library Manager in the Arduino IDE to install the [USB-MIDI](http://_vscodecontentref_/5), [Encoder](http://_vscodecontentref_/6), and [Bounce2](http://_vscodecontentref_/7) libraries.

4. **Connect Hardware Components**
    - Connect the encoders and buttons to the pins specified in the Pinout section.

5. **Upload the Code to the Arduino Board**
    - Select the appropriate board and port in the Arduino IDE.
    - Upload the code to your Arduino board.

## Usage

- **Connect to Computer**
  - Once the code is uploaded, connect the Arduino to your computer via a USB cable.

- **Configure the DAW**
  - Open your preferred DAW and configure it to recognize the FaderPorti as a MIDI input device.

- **Control the DAW**
  - Use the encoders to adjust parameters and the buttons to control playback, recording, and other functions.

## Contributions

Contributions are welcome! If you have any improvements or corrections, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Additional Documentation

- English Documentation
- Documentación en Español

## Screenshots

![IMAGES](docs/images)



## 3D Project

You can download and print the case for the controller from the following link: [FaderPorti USB Box on Tinkercad](https://www.tinkercad.com/things/cjWDqjR7V7j-faderporti-usb-box?sharecode=X4At-7BB9CBkAALtWwc4YwsMeTGp326zvozLMah07FM)

## Functionality Video

![Functionality Video](docs/funcionamiento.mp4)

## Contact

For any inquiries or suggestions, you can contact the project maintainer at [pedroiriso@galileo.edu.ar](mailto:pedroiriso@galileo.edu.ar).
