void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(14,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
delay(100); // nine tenth of a sec
digitalWrite(13,LOW);
delay(100); // one tenth of a sec
// digitalWrite(13,LOW);

digitalWrite(12,HIGH);
delay(500); // nine tenth of a sec
digitalWrite(12,LOW);
delay(500); // one tenth of a sec
// digitalWrite(13,LOW);

digitalWrite(14,HIGH);
delay(1000); // nine tenth of a sec
digitalWrite(14,LOW);
delay(1000); // one tenth of a sec
// digitalWrite(13,LOW);
}
