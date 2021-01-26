#include <Arduino.h>

// https://www.youtube.com/watch?v=r_PexDLIfH8

int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String msg = "What colour do you want? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available() == 0) {
  // nothing in the while loop as we wait for the user to input.

}

myColor = Serial.readString();  // Getting input from user and assign it to var myColor.

if (myColor == "red" || myColor == "Red") {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

}

if (myColor == "green" || myColor == "Green") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);

}

if (myColor == "blue" || myColor == "Blue") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);

}

if (myColor == "aqua" || myColor == "Aqua") {
  digitalWrite(redPin, LOW);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 80);

}

if (myColor == "off" || myColor == "Off") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

}

}

/* Homework:
Get colors cyan, magentap, yellow, orange & fuchsia.
*/
