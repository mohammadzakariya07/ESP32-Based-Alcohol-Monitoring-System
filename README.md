# 🍺 ESP32-Based Alcohol Monitoring System

## 📌 Overview
The **ESP32-Based Alcohol Monitoring System** is an embedded safety project designed to detect alcohol concentration using an MQ-3 alcohol sensor. When the detected alcohol level exceeds a predefined threshold, the ESP32 automatically disables a relay (simulating motor or ignition cutoff) and displays the status on an OLED screen.

This project is suitable for **vehicle safety**, **industrial monitoring**, and **alcohol detection systems**.

---

## ⚙️ Features
- Real-time alcohol level monitoring  
- Automatic relay-based motor/ignition cutoff  
- OLED display for live readings and status  
- Serial monitor support for calibration  
- Low-power and compact ESP32 design  

---

## 🧠 Working Principle
1. MQ-3 sensor continuously senses alcohol concentration.
2. ESP32 reads the analog value from the sensor.
3. If the value exceeds the threshold:
   - Relay turns OFF (motor disabled)
   - OLED displays **Alcohol Detected**
4. If the value is below the threshold:
   - Relay remains ON
   - OLED displays **Safe Status**

---

## 🔌 Pin Configuration
| Component | ESP32 Pin |
|---------|-----------|
| MQ-3 Sensor (Analog) | GPIO 34 |
| Relay Module | GPIO 27 |
| OLED SDA | GPIO 21 |
| OLED SCL | GPIO 22 |

---

## 🧩 Components Used
- ESP32 Development Board  
- MQ-3 Alcohol Sensor  
- Relay Module  
- 0.96" OLED Display (SSD1306)  
- Jumper Wires  
- Power Supply  

---

## 💻 Software & Libraries
- Arduino IDE  
- Adafruit GFX Library  
- Adafruit SSD1306 Library  

---

## 🚗 Applications
- Drunk-driving prevention system  
- Vehicle ignition safety lock  
- Industrial alcohol monitoring  
- Embedded safety systems  

---


.

---

## 👤 Author
**Mohammad Zakariya**  
B.Tech – Electronics & Communication Engineering  
Embedded Systems | Arduino | ESP32 | IoT
