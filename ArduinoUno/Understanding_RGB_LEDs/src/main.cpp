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
  analogWrite(greenPin, 255); // when using numeric or decimal RGB code, must use analogWrite.
  analogWrite(bluePin, 80);

}

/*if (myColor == "cyan" || myColor == "Cyan") {
  digitalWrite(redPin, LOW);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);

}*/

/*if (myColor == "magenta" || myColor == "Magenta") {
  analogWrite(redPin, 255);
  digitalWrite(greenPin, LOW);
  analogWrite(bluePin, 255);

}*/

/*if (myColor == "yellow" || myColor == "Yellow") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 140);
  digitalWrite(bluePin, LOW);

}*/

if (myColor == "orange" || myColor == "Orange") {
  analogWrite(redPin, 255);
  analogWrite(greenPin,20);
  digitalWrite(bluePin, LOW);

}

if (myColor == "fuchsia" || myColor == "Fuchsia") {
  analogWrite(redPin, 255);
  digitalWrite(greenPin, LOW);
  analogWrite(bluePin, 255);

}

if (myColor == "yellow" || myColor == "Yellow") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 100);
  analogWrite(bluePin, 0);

}

if (myColor == "cyan" || myColor == "Cyan") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);

}

if (myColor == "magenta" || myColor == "Magenta") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);

}

if (myColor == "off" || myColor == "Off") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

}

}

/* Homework:
Get colors cyan, magenta, yellow, orange & fuchsia. = DONE.
Note that different combination of RGB codes can produce up to a max of 16 million colors.
Ref to URl below for color codes:
https://fopp.umsi.education/books/published/fopp/Iteration/NestedIterationImageProcessing.html
*/
