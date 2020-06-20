/* Using ESP8266 nodemcu board 
Tutorial from https://www.youtube.com/watch?v=Lg39qKrdySU&t=1468s
*/

int pin2=4; //Yellow, D2 is GPIO4
int pin3=0; //Green, D3 is GPIO0
int pin4=2; //Red, D4 is GPIO2
int pin5=14;  //Blue, D5 is GPIO14
int waitTime=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Binary 0000
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 0001
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 0010
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 0011
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 0100
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 0101
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 0110
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 0111
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 1000
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 1001
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 1010
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 1011
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 1100
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 1101
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 1110
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 1111
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);
}
