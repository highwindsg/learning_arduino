void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("On");
  delay(500);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Off");
  delay(4000);
}
