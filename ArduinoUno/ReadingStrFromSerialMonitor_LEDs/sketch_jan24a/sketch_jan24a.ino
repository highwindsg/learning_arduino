#include <Arduino.h>

// https://www.youtube.com/watch?v=MAnAc_t0OrM&t=610s

String msg = "What color LED? ";
String myColor;
int redPin = 12;
int greenPin = 11;
int bluePin = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Now we 'ask -> wait -> read'
Serial.println(msg);  // we ask
while (Serial.available() == 0){
  // do nothing in this while loop as we wait

}

myColor = Serial.readString();

if (myColor == "red"){
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

}

if (myColor == "green"){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);

}

if (myColor == "blue"){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);

}

}
