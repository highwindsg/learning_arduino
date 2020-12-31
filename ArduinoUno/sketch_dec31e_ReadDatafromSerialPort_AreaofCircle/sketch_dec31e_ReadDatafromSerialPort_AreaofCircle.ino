float radius;
String msg = "What is the radius of your circle? ";
float area;
String msg2 = "Your circle has an area of: ";
float pi = 3.14;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);  // We ask.

while (Serial.available() == 0){  // We wait, as long as user have not entered a number greater than 0.
}

radius = Serial.parseFloat();
area = pi * radius * radius;
Serial.print(msg2);
Serial.println(area);

}
