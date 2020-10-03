/* https://www.youtube.com/watch?v=ORNted-NgRM&t=460s
Using a potentiometer 1-K Ohm, a red LED, a 330 Ohm resistor. */

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
  
  if (V2 >= 2 && V2 <= 3) { // use the && to mean 'and'.
    digitalWrite(redPin, HIGH);
  }
  if (V2 <= 2 || V2 >= 3) { // use the || to mean 'or'.
    digitalWrite(redPin, LOW);
  }
  
  delay(dt);

}

/* Homework:
 *  Improve the project to include 3 LEDs (green, yellow and red).
 *  Which means will need 3 pinMode, 3 resistors, 3 LEDs var names.
 *  If voltage is under 3 volts, light up green LED.
 *  If voltage is between 3 and 4 volts, light up yellow LED.
 *  If voltage is above 4 volts, light up red LED.
 */
