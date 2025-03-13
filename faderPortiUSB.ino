// filepath: /faderPortiUSB/faderPortiUSB/faderPortiUSB.ino
#include <USB-MIDI.h>
#include <Encoder.h>
#include <Bounce2.h>

USBMIDI_CREATE_DEFAULT_INSTANCE();

// Definición de pines
const int encoder1RightPin = 5;
const int encoder1LeftPin = 6;
const int encoder1ButtonPin = 7;
const int encoder2RightPin = 2;
const int encoder2LeftPin = 3;
const int encoder2ButtonPin = 4;
const int cursorForwardPin = 8;
const int cursorBackPin = 9;
const int muteButtonPin = 10;
const int recButtonPin = 16;
const int soloButtonPin = 14;
const int pauseButtonPin = 15;
const int playButtonPin = A1;
const int ffButtonPin = A2;
const int rewButtonPin = A3;
const int generalRecButtonPin = A0; // Pin A0 para el REC general

// Crear instancias de los encoders
Encoder encoder1(encoder1LeftPin, encoder1RightPin);
Encoder encoder2(encoder2LeftPin, encoder2RightPin);

// Crear instancias de los botones
Bounce buttonEncoder1 = Bounce();
Bounce buttonEncoder2 = Bounce();
Bounce buttonCursorForward = Bounce();
Bounce buttonCursorBack = Bounce();
Bounce buttonMute = Bounce();
Bounce buttonRec = Bounce();
Bounce buttonSolo = Bounce();
Bounce buttonPause = Bounce();
Bounce buttonPlay = Bounce();
Bounce buttonFF = Bounce();
Bounce buttonRew = Bounce();
Bounce buttonGeneralRec = Bounce();

// Variables para almacenar el estado de los encoders
long lastEncoder1Pos = -999;
long lastEncoder2Pos = -999;

void setup() {
  MIDI.begin();
  Serial.begin(9600); // Inicializar la comunicación serie
  //while (!Serial) {
    ; // Esperar a que la conexión serie se establezca
  //}
  Serial.println("Iniciando prueba de encoders y botones...");

  // Configurar pines de botones como entradas con pull-up interno
  pinMode(encoder1ButtonPin, INPUT_PULLUP);
  pinMode(encoder2ButtonPin, INPUT_PULLUP);
  pinMode(cursorForwardPin, INPUT_PULLUP);
  pinMode(cursorBackPin, INPUT_PULLUP);
  pinMode(muteButtonPin, INPUT_PULLUP);
  pinMode(recButtonPin, INPUT_PULLUP);
  pinMode(soloButtonPin, INPUT_PULLUP);
  pinMode(pauseButtonPin, INPUT_PULLUP);
  pinMode(playButtonPin, INPUT_PULLUP);
  pinMode(ffButtonPin, INPUT_PULLUP);
  pinMode(rewButtonPin, INPUT_PULLUP);
  pinMode(generalRecButtonPin, INPUT_PULLUP);

  // Configurar instancias de Bounce para los botones
  buttonEncoder1.attach(encoder1ButtonPin);
  buttonEncoder1.interval(5);
  buttonEncoder2.attach(encoder2ButtonPin);
  buttonEncoder2.interval(5);
  buttonCursorForward.attach(cursorForwardPin);
  buttonCursorForward.interval(5);
  buttonCursorBack.attach(cursorBackPin);
  buttonCursorBack.interval(5);
  buttonMute.attach(muteButtonPin);
  buttonMute.interval(5);
  buttonRec.attach(recButtonPin);
  buttonRec.interval(5);
  buttonSolo.attach(soloButtonPin);
  buttonSolo.interval(5);
  buttonPause.attach(pauseButtonPin);
  buttonPause.interval(5);
  buttonPlay.attach(playButtonPin);
  buttonPlay.interval(5);
  buttonFF.attach(ffButtonPin);
  buttonFF.interval(5);
  buttonRew.attach(rewButtonPin);
  buttonRew.interval(5);
  buttonGeneralRec.attach(generalRecButtonPin);
  buttonGeneralRec.interval(5);
}

void loop() {
  MIDI.read();

  // Actualizar el estado de los botones
  buttonEncoder1.update();
  buttonEncoder2.update();
  buttonCursorForward.update();
  buttonCursorBack.update();
  buttonMute.update();
  buttonRec.update();
  buttonSolo.update();
  buttonPause.update();
  buttonPlay.update();
  buttonFF.update();
  buttonRew.update();
  buttonGeneralRec.update();

  // Prueba de botones
  if (buttonEncoder1.fell()) {
    Serial.println("Botón Encoder 1 presionado");
    MIDI.sendNoteOn(60, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(60, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonEncoder2.fell()) {
    Serial.println("Botón Encoder 2 presionado");
    MIDI.sendNoteOn(61, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(61, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonCursorForward.fell()) {
    Serial.println("Botón Cursor Adelante presionado");
    MIDI.sendNoteOn(62, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(62, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonCursorBack.fell()) {
    Serial.println("Botón Cursor Atrás presionado");
    MIDI.sendNoteOn(63, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(63, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonMute.fell()) {
    Serial.println("Botón Mute presionado");
    MIDI.sendNoteOn(64, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(64, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonRec.fell()) {
    Serial.println("Botón Rec presionado");
    MIDI.sendNoteOn(65, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(65, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonSolo.fell()) {
    Serial.println("Botón Solo presionado");
    MIDI.sendNoteOn(66, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(66, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonPause.fell()) {
    Serial.println("Botón Pause presionado");
    MIDI.sendNoteOn(67, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(67, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonPlay.fell()) {
    Serial.println("Botón Play presionado");
    MIDI.sendNoteOn(68, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(68, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonFF.fell()) {
    Serial.println("Botón FF presionado");
    MIDI.sendNoteOn(69, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(69, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonRew.fell()) {
    Serial.println("Botón Rew presionado");
    MIDI.sendNoteOn(70, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(70, 127, 1); // Enviar mensaje MIDI Note Off
  }
  if (buttonGeneralRec.fell()) {
    Serial.println("Botón Rec General presionado");
    MIDI.sendNoteOn(71, 127, 1); // Enviar mensaje MIDI Note On
    MIDI.sendNoteOff(71, 127, 1); // Enviar mensaje MIDI Note Off
  }

  // Prueba de encoder 1
  long encoder1Pos = encoder1.read();
  if (encoder1Pos != lastEncoder1Pos) {
    Serial.print("Encoder 1 posición: ");
    Serial.println(encoder1Pos);
    if (encoder1Pos > lastEncoder1Pos) {
      MIDI.sendControlChange(1, 1, 1); // Enviar mensaje MIDI Control Change para incrementar
    } else {
      MIDI.sendControlChange(1, 127, 1); // Enviar mensaje MIDI Control Change para decrementar
    }
    lastEncoder1Pos = encoder1Pos;
  }

  // Prueba de encoder 2
  long encoder2Pos = encoder2.read();
  if (encoder2Pos != lastEncoder2Pos) {
    Serial.print("Encoder 2 posición: ");
    Serial.println(encoder2Pos);
    if (encoder2Pos > lastEncoder2Pos) {
      MIDI.sendControlChange(2, 1, 1); // Enviar mensaje MIDI Control Change para incrementar
    } else {
      MIDI.sendControlChange(2, 127, 1); // Enviar mensaje MIDI Control Change para decrementar
    }
    lastEncoder2Pos = encoder2Pos;
  }
}