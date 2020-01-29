/********************************************************
 * IoT Motion Detector with Blynk
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 * 
 * Developed by Marcelo Rovai = 30 November 2016
 *******************************************************/
#include <ESP8266WiFi.h>

#define BLYNK_PRINT Serial  // Comment this out to disable prints and save space.
#include <BlynkSimpleEsp8266.h>
char auth[] = "lLKAvWoR_bV8PvkIF0MMEGLRT_C8IuLd";

/* WiFi credentials */
char ssid[] = "wolfpackhustle";
char pass[] = "Pilakada02";

/* HC-SR501 Motion Detector */
#define ledPin 13 // GPIO D7
#define pirPin 5 // GPIO D1 input for HC-SR501
int pirValue; // Place to store read PIR value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);
  Blynk.begin(auth, ssid, pass);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  getPirValue();
  Blynk.run();
}

/*********************************************************
 * Get PIR data
 ********************************************************/
 void getPirValue(void)
 {
  pirValue = digitalRead(pirPin);
  if (pirValue)
  {
    Serial.println("===> Motion detected.");
    Blynk.notify("===> Motion detected in master bedroom study desk.");
  }

  digitalWrite(ledPin, pirValue);
  delay(8000);
  
 }
