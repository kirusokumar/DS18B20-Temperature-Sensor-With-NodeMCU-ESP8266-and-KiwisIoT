# DS18B20 Temperature Sensor with NodeMCU ESP8266 and KiwisIoT

An IoT-based temperature monitoring project using a DS18B20 digital temperature sensor, NodeMCU ESP8266, and KiwisIoT cloud dashboard.

## Project Overview

This project measures temperature using the DS18B20 digital temperature sensor and sends the readings to the KiwisIoT platform through the NodeMCU ESP8266's Wi-Fi connection.

The temperature data can be monitored remotely through a cloud dashboard, making it useful for learning IoT-based temperature monitoring.

## Features

- Real-time temperature measurement
- Digital temperature sensing using DS18B20
- Wireless data transmission using ESP8266 Wi-Fi
- Remote monitoring through KiwisIoT
- Live temperature visualization on a dashboard

## Hardware Components

| Component | Quantity |
|---|---:|
| NodeMCU ESP8266 | 1 |
| DS18B20 Temperature Sensor | 1 |
| 4.7kΩ Resistor | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- OneWire Library
- DallasTemperature Library
- KiwisIoT Arduino Library

## Circuit Connections

### DS18B20 to NodeMCU ESP8266

| DS18B20 Pin | NodeMCU Pin |
|---|---|
| VCC (Red) | 3.3V |
| DATA (Yellow) | D2 |
| GND (Black) | GND |

**Important:** Connect a 4.7kΩ pull-up resistor between the DATA pin and 3.3V. Some sensor modules may already include this resistor.

## KiwisIoT Dashboard

The temperature readings are transmitted to KiwisIoT through Wi-Fi.

| Channel | Data |
|---|---|
| Channel 0 | Temperature (°C) |

Create a dashboard widget to display the incoming temperature readings.

## How It Works

1. The DS18B20 measures the surrounding temperature.
2. The NodeMCU ESP8266 reads the digital temperature value.
3. The ESP8266 connects to Wi-Fi.
4. The KiwisIoT library sends the temperature reading to the cloud.
5. The KiwisIoT dashboard displays the received temperature data.

## Installation

1. Install the Arduino IDE.
2. Configure the ESP8266 board package.
3. Install the OneWire and DallasTemperature libraries.
4. Install the KiwisIoT Arduino library.
5. Connect the DS18B20 sensor to the NodeMCU.
6. Configure your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino sketch.
7. Upload the code to the NodeMCU.
8. Open your KiwisIoT dashboard to monitor temperature readings.

## Libraries and Resources

- **KiwisIoT Website:** https://www.kiwisiot.in/
- **KiwisIoT Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- **KiwisIoT Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## Applications

- Room temperature monitoring
- Water temperature monitoring
- Storage temperature monitoring
- Greenhouse monitoring
- Educational IoT projects

## Project Tutorial

Read the complete project tutorial on Instructables:

[DS18B20 Temperature Sensor with NodeMCU ESP8266 and KiwisIoT](https://www.instructables.com/DS18B20-Temperature-Sensor-With-NodeMCU-ESP8266-an)

## Author

**Kirusokumar**

