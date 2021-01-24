#include <Arduino.h>

// https://www.youtube.com/watch?v=MAnAc_t0OrM&t=610s

String myName;
String msg = "What is your name? ";
String msg2 = "Hello ";
String msg3 = "Welcome to Arduino!";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Now we 'ask -> wait -> read'
Serial.println(msg);  // we ask
while (Serial.available() == 0){
  // do nothing in this loop as we wait

}
myName = Serial.readString();
Serial.print(msg2);
Serial.print(myName);
Serial.println(msg3);

}