/* https://www.youtube.com/watch?v=PUte1cmJ44A&t=1040s 
Using a potentiometer 10K Ohm */

int myVoltPin = A2; // declare a var that is connected to analog A2 Pin.
int readVal;  // declare a var for reading a value from the potentiometer.
float V2; // declare a var that contains the voltage that is with decimal places.
int delayT = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // To open a serial port monitor to be ready at a baud rate of 9600 to display the readings.

}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(myVoltPin);
V2 = (5./1023.) * readVal;
Serial.println(V2);
delay(delayT);

}
