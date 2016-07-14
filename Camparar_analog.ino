//PARPADEO DE LED RANDOM
#include "WProgram.h"

long signal;
int ledPin;

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {                        // put your main code here, to run repeatedly:
  signal = analogRead (0);
  if ((signal<400)&&(signal>100)){   //Rojo
    digitalWrite(11, HIGH);
    ledPin = 11;
    }
  delay(10);
  digitalWrite(ledPin, LOW);
  delay(1);
}
