                     +-----------------------+
                     |       ESP32 DevKit    |
                     |                       |
          MQ3 Analog | 34 ---------------------> MQ3 OUT
                     |
          Relay Ctrl | 27 ---------------------> Relay IN
                     |
               I2C SDA| 21 ---------------------> OLED SDA
               I2C SCL| 22 ---------------------> OLED SCL
                     |
                     | 3V3 ------+-----------+---> OLED VCC
                     |           |           |
                     |           |           +---> MQ3 VCC
                     |           |
                     | GND ------+-----------+---> OLED GND
                     |           |
                     |           +-----------+---> MQ3 GND
                     |           |
                     |           +---> Relay GND
                     |
                     | VIN (or 5V) ---------> Relay VCC
                     +-----------------------+


Motor Connection (via Relay)
   +12V ---- Relay COM
                Relay NO ----> Motor +
   Motor - ----------------------------> Ground
