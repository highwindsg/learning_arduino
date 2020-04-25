/* Setting variables in the beginning will help prevent you from repeating the changes
 *  if you wants to change the PIN number.
 */
int blueLED = 13;
float pi = 3.14;
int S = 50;
int O = 150;
int LongW = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// SOS S signal
digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

// SOS O signal
digitalWrite(blueLED,HIGH);
delay(500); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(500); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(500); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

// SOS S signal
digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

digitalWrite(blueLED,HIGH);
delay(100); // tenth of a sec
digitalWrite(blueLED,LOW);
delay(100); // tenth of a sec
// digitalWrite(blueLED,LOW);

// 3 secs long wait before restarting the loop again.
delay(LongW);
}
