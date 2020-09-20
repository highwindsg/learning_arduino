// The analogWrite PIN on the Arduino UNO board has a ~ sign before the number,
// which is ~3, ~5, ~6, ~9, ~10 and ~11.
int redPin = 9;
int bright0 = 0;  // set brughtness between 1 to 255. 0 is off.
int bright1 = 1;
int bright5 = 5;
int bright10 = 10;
int bright15 = 15;
int bright20 = 20;
int bright25 = 25;
int bright30 = 30;
int bright50 = 50;
int bright100 = 100;
int dit = 150;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, bright0);
delay(dit);
analogWrite(redPin, bright1);
delay(dit);
analogWrite(redPin, bright5);
delay(dit);
analogWrite(redPin, bright10);
delay(dit);
analogWrite(redPin, bright15);
delay(dit);
analogWrite(redPin, bright20);
delay(dit);
analogWrite(redPin, bright25);
delay(dit);
analogWrite(redPin, bright30);
delay(dit);
analogWrite(redPin, bright50);
delay(dit);
analogWrite(redPin, bright100);
delay(dit);
analogWrite(redPin, bright50);
delay(dit);
analogWrite(redPin, bright30);
delay(dit);
analogWrite(redPin, bright25);
delay(dit);
analogWrite(redPin, bright20);
delay(dit);
analogWrite(redPin, bright15);
delay(dit);
analogWrite(redPin, bright10);
delay(dit);
analogWrite(redPin, bright5);
delay(dit);
analogWrite(redPin, bright1);
delay(dit);
}
