#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define MQ3_PIN 34
#define RELAY_PIN 27
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Alcohol detection threshold
int threshold = 750;

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);  // Motor ON initially

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED Not Found");
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Alcohol Detection");
  display.println("Using ESP32");
  display.display();
  delay(2000);
}

void loop() {
  int mqValue = analogRead(MQ3_PIN);

  // Print readings
  Serial.print("MQ3 Value: ");
  Serial.print(mqValue);
  Serial.print(" | Threshold: ");
  Serial.println(threshold);

  // OLED Display
  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(1);
  display.println("Alcohol Level:");

  display.setTextSize(2);
  display.setCursor(0, 20);
  display.println(mqValue);

  // Motor control logic
  if (mqValue > threshold) {
    digitalWrite(RELAY_PIN, LOW);  // Motor OFF
    display.setTextSize(1);
    display.setCursor(0, 50);
    display.println("Status: HIGH! Motor OFF");
  } else {
    digitalWrite(RELAY_PIN, HIGH); // Motor ON
    display.setTextSize(1);
    display.setCursor(0, 50);
    display.println("Status: SAFE Motor ON");
  }

  display.display();
  delay(300);
}
