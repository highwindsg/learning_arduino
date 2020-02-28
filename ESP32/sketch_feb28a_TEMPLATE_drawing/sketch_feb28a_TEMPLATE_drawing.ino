#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define PAUSE 1000
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,OLED_RESET);


void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  display.fillScreen(0);
  display.display();
  

}

void loop() {
  // put your main code here, to run repeatedly:

  display.drawPixel(64,32,1); // display.drawpixel(x-axis,y-axis,color-number-code)
  // display.display();

  display.drawLine(0,0,32,63,1); // display.drawLine(start x-axis,start y-axis, end x-axis, end y-axis, color-number-code)
  display.drawRect(70,2,30,15,1); // (upper left corner(70,2), width, height(30,15), color-number-code)
  display.fillRect(70,40,35,15,1);  // (upper left corner(70,40), width, height, color-number-code)
  display.drawCircle(22,30,15,1); // (starting point of circle(22,30), radius, color-number-code)
  display.display();

  
}
