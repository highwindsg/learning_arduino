/* Printing a number increase by 1 to serial port output display
 */

int j = 1;
int waitT = 750;
int x = 3;
int y = 7;
int z;
//String myString = "j = ";
String myString = " + ";
String mess1 = "A Circle With Radius ";
String mess2 = " Has an Area of ";
String mess3 = ".";
float pi = 3.14;
float r = 2;
float area;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
/*Serial.print(myString);
Serial.println(j);
j += 1;
*/

/*z = x + y;
Serial.print(x);
Serial.print(myString);
Serial.print(y);
Serial.print(" = ");
Serial.println(z);
*/

area = pi * r * r;
Serial.print(mess1);
Serial.print(r);
Serial.print(mess2);
Serial.print(area);
Serial.println(mess3);
delay(waitT);
r = r + 0.5;

}
