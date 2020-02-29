/**************************************************************************
 GND port to RND port
 VCC port to 3V3
 SCL port to D22
 SDA port to D21
 **************************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET  LED_BUILTIN     //4 Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Image_name, 128x64px
static const unsigned char PROGMEM Image_name[] = {
  // image bitmap code format .... 0x00, 0x00, 0x00,
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // ....
  };


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  delay(2000); // Pause for 2 seconds.
  
  // Clear the buffer
  display.clearDisplay();

  // Draw bitmap on the screen
  display.drawBitmap(0, 0, Image_name, 128, 64, 1);
  display.display();

  // Invert and restore display, pausing in-between
  display.invertDisplay(true);
  delay(1000);
  display.invertDisplay(false);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Clear the buffer
  display.clearDisplay();

  // Draw bitmap on the screen
  display.drawBitmap(0, 0, Image_name, 128, 64, 1);
  display.display();

  // Invert and restore display, pausing in-between
  display.invertDisplay(true);
  delay(1000);
  display.invertDisplay(false);
  delay(1000);

}
