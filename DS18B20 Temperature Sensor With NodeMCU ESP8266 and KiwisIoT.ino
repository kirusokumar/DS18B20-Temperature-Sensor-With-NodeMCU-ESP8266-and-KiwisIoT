#include <KiwisIoT.h>
#include <OneWire.h>
#include <DallasTemperature.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define ONE_WIRE_BUS D5

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);

  sensors.begin();
  kiwisiot.begin();

  Serial.println("DS18B20 Temperature Monitor Started");
}

void loop() {
  kiwisiot.run();

  sensors.requestTemperatures();

  float temperatureC = sensors.getTempCByIndex(0);

  if (temperatureC != DEVICE_DISCONNECTED_C &&
      temperatureC > -55.0 &&
      temperatureC <= 125.0) {

    Serial.print("Temperature = ");
    Serial.print(temperatureC);
    Serial.println(" °C");

    kiwisiot.send("1", temperatureC);
  }
  else {
    Serial.println("Temperature sensor not detected!");
  }

  delay(2000);
}