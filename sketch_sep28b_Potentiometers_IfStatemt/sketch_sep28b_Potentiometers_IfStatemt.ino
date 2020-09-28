/* https://www.youtube.com/watch?v=ORNted-NgRM&t=460s
Using a potentiometer 1-K Ohm */

int myPin = A2; // declare a var that is connected to analog A2 Pin.
int readVal;  // declare a var for reading a value from the potentiometer.
float V2; // declare a var that contains the voltage that is with decimal places.
int dt = 250;
int redPin = 9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // To open a serial port monitor to be ready at a baud rate of 9600 to display the readings.
pinMode(myPin, INPUT);  // set the pin mode for var myPin for the analog input from analog A2 Pin.
pinMode(redPin, OUTPUT);  // set the pin mode for var redPin for the output to red LED on Pin 9.

}

void loop() {
  // put your main code here, to run repeatedly:

  readVal = analogRead(myPin);
  V2 = (5./1023.) * readVal;
  Serial.print("Potentiometer voltage is ");
  Serial.println(V2);
  
  if (V2 >= 2 && V2 <= 3) { // use the && to means 'and'.
    digitalWrite(redPin, HIGH);
  }
  if (V2 <= 2 || V2 >= 3) { // use the || to means 'or'.
    digitalWrite(redPin, LOW);
  }
  
  delay(dt);

}
