// Arduino Builder Python Script v2.0
// Start
// action: u
// board: uno
// baudrate: 9600
// temp files: N
// verbose: N
// serial monitor: N
// serial file: SMonitor.txt
// samples: 500
// End

// ====== Description ======
// action: v | u  ... v = verify, u = upload
// board: uno | mega | due ... name of the board correspondig to arduino cli
// baudrate: 9600 | 115000 ... etc
// temp files: N | Y  ... option to create temp files
// serial monitor: N | Y ... to create file of serial monitor
// serial file: Name ... name of the serial monitor file
// samples: Number ... number of samples to save in serial file

#include <Arduino.h>

int pinAnalog = A0;
int dato = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    dato = analogRead(pinAnalog);
    Serial.println(dato);
    delay(1000);
}
