SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  uint16_t value = analogRead(A5);  // Sets time value to the value read off Pin A5
  digitalWrite(D5, HIGH); // Turns D5 on.
  delay(value);  // Initiates a delay based on the time set.
  digitalWrite(D5, LOW); // Turns D5 off.
  delay(value); // Initiates a delay based on the time set.

}