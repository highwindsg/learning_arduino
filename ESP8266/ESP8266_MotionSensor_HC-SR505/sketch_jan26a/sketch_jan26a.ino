#define data 2 // GPIO2 or D4 on ESP8266

long nextCheck;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis() >= nextCheck) {
    bool trigger = digitalRead(data);
    if (trigger) {
      Serial.println("Motion Triggered (" + String(millis()) + ")");
      nextCheck = millis() + 9000;
      Serial.println("Next Check: " + String(nextCheck));
    }
  }

  delay(8000);
}
