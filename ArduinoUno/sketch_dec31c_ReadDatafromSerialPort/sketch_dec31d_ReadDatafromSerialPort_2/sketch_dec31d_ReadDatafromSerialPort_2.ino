int myNumber;
String msg = "How many blinks do you want: ";
//String msg2 = "Your Number is: ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);  // We ask.

while (Serial.available() == 0){  // We wait.
}

myNumber = Serial.parseInt(); // We read it.
Serial.print(msg2); // Serial print out the first msg.
Serial.println(myNumber); // Serial print out the second msg2.
Serial.println("");

}

// https://www.youtube.com/watch?v=7aP5KL5clWA
// To get data from the serial monitor, you got to do three things:
// First, ask for it.
// Second, wait for it.
// Third, read it.
// Threfore, Ask -> Wait -> Read.
