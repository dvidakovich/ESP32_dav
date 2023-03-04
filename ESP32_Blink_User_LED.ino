/*
  Blink the user led located on GPIO18 of Dan's ESP32_R1 board
*/

const int userLED = 18;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(userLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(userLED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(userLED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
