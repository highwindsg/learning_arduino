#include <Arduino.h>
#include <ESP8266WiFi.h>

const char* ssid = "wolfpackhustle";
const char* password = "Pilakada02";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Connecting.... ");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print("Waiting to connect to WiFi. ");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
