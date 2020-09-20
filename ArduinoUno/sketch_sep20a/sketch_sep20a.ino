int redPin = 9;
int bright = 255; // set brughtness between 1 to 255. 0 is off.

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, bright);
}
