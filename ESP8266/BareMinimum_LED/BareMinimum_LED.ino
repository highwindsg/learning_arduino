/* Setting variables in the beginning will help prevent you from repeating the changes
 *  if you wants to change the PIN number.
 */
int blueLED = 13;
int redLED = 12;
int greenLED = 14;
int LongW = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLED,OUTPUT);
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(blueLED,HIGH);
delay(100); // nine tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // one tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(500); // nine tenth of a sec
digitalWrite(redLED,LOW);
delay(500); // one tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(greenLED,HIGH);
delay(1000); // nine tenth of a sec
digitalWrite(greenLED,LOW);
delay(1000); // one tenth of a sec
// digitalWrite(blueLED,LOW);

delay(LongW);
}
