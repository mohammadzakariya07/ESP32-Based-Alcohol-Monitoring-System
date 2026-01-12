# Working Explanation

The MQ-3 alcohol sensor detects alcohol vapors and outputs an analog voltage proportional to the concentration. The ESP32 reads this voltage using its ADC pin.

A threshold value is set in the code. When the sensor value exceeds this threshold, the ESP32 turns OFF the relay to stop the motor or ignition system. The OLED display shows the alcohol level and system status in real time.

This ensures enhanced safety by preventing operation under alcohol influence.
