int j;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j = 1; j <= 10; j = j += 1) {  // print out from 1 to 10.
  // for (j = 10; j >= 1; j = j -= 1) {  // print out from 10 to 1.
  // for (j = 2; j <= 10; j = j += 2) {  // print out only even numbers.
    Serial.println(j);
    delay(delayTime);
    
  }
Serial.println();
}
