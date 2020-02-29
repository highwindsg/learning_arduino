/**************************************************************************
 GND port to RND port
 VCC port to 3V3
 SCL port to D22
 SDA port to D21
 **************************************************************************/

#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

#define OLED_ADDR 0x3C

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT);

void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Welcome");

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 17);
  display.println("This is");
  display.println("a Splash");
  display.println("Screen");

  display.display();  // If the display() func is not run, then the above msg will not show.

  delay(5000);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("IP Info");

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 17);
  display.println("IP: 192.168.1.1");
  display.println("Subnet: 255.255.255.0");
  display.println("Gateway: 192.168.1.1");
  display.println("DNS1: 192.168.1.2");
  display.println("DNS2: 192.168.1.3");

  display.display();
  delay(5000);
}
