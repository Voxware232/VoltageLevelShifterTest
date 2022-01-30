#define outputPin A4; // Change this to either A4 or A5 and measure the output using an oscilloscope to check if it is working

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(outputPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(outputPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(outputPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
