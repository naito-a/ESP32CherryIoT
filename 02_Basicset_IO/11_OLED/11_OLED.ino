#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h> //by Adafruit

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup()
{
  Wire.begin(1, 3); //(SDA, SCL) 1,3:ConnectorA 5,4:ConnectorB

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for(;;); //Infinite loop when screen initialization fails
  }
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

}

void loop()
{
  display.clearDisplay();
  display.setCursor(0, 5);
  display.print(F("Hello"));
  display.setCursor(0, 25);
  display.print(F("ESP32"));
  display.setCursor(0, 45);
  display.print(F("CherryIoT"));
  delay(2000);
  display.display();
  display.clearDisplay();
  display.setCursor(0, 5);
  display.print(F("Good"));
  display.setCursor(0, 25);
  display.print(F("Bye"));
  display.setCursor(0, 45);
  display.print(F("(--)"));
  delay(2000);
  display.display();

}