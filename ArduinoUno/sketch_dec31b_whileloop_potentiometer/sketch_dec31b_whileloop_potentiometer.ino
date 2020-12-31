int potVal; // value returned by the potentiometer.
int delayTime = 100;
int potPin = A0;  // Analog port goes to the Current port on the potentiometer.
int redPin = 7; // red LED light on pin 7.

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin,INPUT);
pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
Serial.println(potVal);
delay(delayTime);

while (potVal >= 1000){       // Therfore while the potentiometer value read greater or equal to 1000,
  digitalWrite(redPin,HIGH);  // the red LED will light up.
  potVal = analogRead(potPin);  // analogRead method will read in the value of the potentiometer Current,
  Serial.println(potVal);     // and pass to var potVal, which will print line out to Serial display.
  delay(delayTime);
  
}
digitalWrite(redPin,LOW);   // And so if the potentiometer value is NOT greater or equal to 1000,
                            // then the red LED will not light up.

}

// https://www.youtube.com/watch?v=CITZIv3SmvU
