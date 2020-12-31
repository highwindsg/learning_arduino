int numBlinks;
String msg = "How many blinks do you want: "; // Ask user how many times to blink, then pass in to var msg.
int j;  // let j be a counter.
int bt = 500; // bt means Blink time.
int redPin = 12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);  // We ask.

while (Serial.available() == 0){  // We wait, as long as user have not entered a number greater than 0.
}

numBlinks = Serial.parseInt(); // We read it.

for (j = 1; j <= numBlinks; j = j + 1){
  digitalWrite(redPin,HIGH);
  delay(bt);
  digitalWrite(redPin,LOW);
  delay(bt);
  
}

}

// https://www.youtube.com/watch?v=7aP5KL5clWA
// To get data from the serial monitor, you got to do three things:
// First, ask for it.
// Second, wait for it.
// Third, read it.
// Threfore, Ask -> Wait -> Read.
