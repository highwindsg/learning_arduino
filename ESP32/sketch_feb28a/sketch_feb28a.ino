#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define PAUSE 1000
Adafruit_SSD1306 display(SCREEN_EIDTH,SCREEN_HEIGHT,&Wire,OLED_RESET);


void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  display.fillScreen(0);
  display.display();
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
