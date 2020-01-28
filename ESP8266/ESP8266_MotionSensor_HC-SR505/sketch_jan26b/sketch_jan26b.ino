#define SIGNAL_PIN 1 // GPIO2 or D4 on ESP8266
#define LED_PIN 13

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(SIGNAL_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SIGNAL_PIN)==HIGH) {
    Serial.println("Movement detected.");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("Did not detect movement.");
    digitalWrite(LED_PIN, LOW);
  }

  delay(8000);
  
}
