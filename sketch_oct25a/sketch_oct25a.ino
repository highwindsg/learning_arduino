// https://www.youtube.com/watch?v=7wKdxsvXAFo&t=3s
// Dimming a LED

int potPin = A1;  // var for potentiometer analog Pin on Arduino board.
int redPin = 6; // var for LED on PWN pin on Arduino board.
int potVal; // var for potentiometer value.
float LEDVal; // var for decimal value of LED.

void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
LEDVal = (255./1023.)*potVal;
analogWrite(redPin, LEDVal);
Serial.println(LEDVal);

}
