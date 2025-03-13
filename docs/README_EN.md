# README_EN.md

# FaderPorti USB Controller

## Overview

The FaderPorti USB Controller is an Arduino-based project designed to provide a MIDI controller interface using encoders and buttons. This project allows users to control various parameters in their digital audio workstation (DAW) through MIDI messages.

## Features

- USB MIDI communication
- Two rotary encoders for parameter adjustment
- Multiple buttons for transport controls (play, pause, record, etc.)
- Debounced button inputs for reliable operation

## Setup Instructions

1. **Hardware Requirements**
   - Arduino board (compatible with USB MIDI)
   - Rotary encoders
   - Push buttons
   - Jumper wires
   - Breadboard (optional)

2. **Software Requirements**
   - Arduino IDE
   - USB-MIDI library
   - Encoder library
   - Bounce2 library

3. **Installation Steps**
   - Clone or download the repository.
   - Open the `faderPortiUSB.ino` file in the Arduino IDE.
   - Install the required libraries via the Library Manager.
   - Connect the hardware components according to the pin definitions in the code.
   - Upload the code to your Arduino board.

## Usage

- Once the code is uploaded, connect the Arduino to your computer.
- Open your preferred DAW and configure it to recognize the FaderPorti as a MIDI input device.
- Use the encoders to adjust parameters and the buttons to control playback and recording.

## Additional Information

For Spanish documentation, please refer to `README_ES.md`. For any issues or contributions, please check the main repository or contact the project maintainer.

## Screenshots

![Screenshot 1](images/imagen1.jpeg)
![Screenshot 2](images/imagen2.jpeg)
![Screenshot 3](images/imagen3.jpeg)
![Screenshot 4](images/imagen4.jpeg)
![Screenshot 5](images/imagen5.jpeg)

## 3D Project

You can download and print the case for the controller from the following link: [FaderPorti USB Box on Tinkercad](https://www.tinkercad.com/things/cjWDqjR7V7j-faderporti-usb-box?sharecode=X4At-7BB9CBkAALtWwc4YwsMeTGp326zvozLMah07FM)

## Functionality Video

![Functionality Video](funcionamiento.mp4)