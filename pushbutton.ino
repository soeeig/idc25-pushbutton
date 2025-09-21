// Define the GPIO pin connected to the push button
#define BUTTON_PIN 10

void setup() {
  // Start the Serial Monitor at 115200 baud
  Serial.begin(115200);
  Serial.println("Starting");

  // Set the button pin as input
  pinMode(BUTTON_PIN, INPUT);  // Consider using INPUT_PULLUP if no external pull-up resistor
}

void loop() {
  // Read the current state of the button: HIGH (pressed) or LOW (not pressed)
  int currentState = digitalRead(BUTTON_PIN);

  // If the button is pressed (reads HIGH), print a message
  if (currentState == HIGH) {
    Serial.println("Pressed");

    // Short delay to prevent multiple detections from one press (basic debounce)
    delay(50);
  }
}
