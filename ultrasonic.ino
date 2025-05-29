#include <LiquidCrystal.h> // Include the LCD library

// Define your LCD pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7

// HC-SR04 sensor pins
const int triggerPin = 7;
const int echoPin = 6;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2); // Initialize the LCD (16 columns, 2 rows)
}

void loop() {
  // Measure distance with HC-SR04 
  long duration, distance;
  digitalWrite(triggerPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Convert to centimeters

  // Display distance on LCD
  lcd.clear(); // Clear the LCD
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm"); 
  delay(100);
}