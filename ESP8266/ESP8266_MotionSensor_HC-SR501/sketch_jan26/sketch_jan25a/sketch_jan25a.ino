/* HC-SR501 Motion Detector on ESP8266 */

int ledPin = 13; // LED light indicator on D7, put a 1K ohm between LED and D7
int pirPin = 5; // Output from HC-SR501 on D1

int pirValue; // var to store read PIR Value

void setup()
  // put your setup code here, to run once:
{
  Serial.begin(115200); // To enable println to serial output console.
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop()
  // put your main code here, to run repeatedly:
{
  pirValue = digitalRead(pirPin);

  if (pirValue == HIGH) {
    Serial.println("Motion detected.");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("0");
    digitalWrite(ledPin, LOW);
  }

  delay(2000);
  
}
