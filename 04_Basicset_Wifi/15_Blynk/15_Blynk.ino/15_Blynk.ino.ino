#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL65SsLpXmC"
#define BLYNK_TEMPLATE_NAME "ESP32"
#define BLYNK_AUTH_TOKEN "zEKpGTRGh0sh5zyoYXEM9B1_OpMHL0jL"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "AP01-02";
char pass[] = "1qaz2wsx";

const int ledPin = 3; //3:ConnectorA 4:ConnectorB 10:Builtin

void setup()
{
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(ledPin, value);
  Serial.println(value ? "LED ON" : "LED OFF");
}

void loop()
{
  Blynk.run();
}