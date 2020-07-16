/*
  Turns an LED on and off, repeadetly. 
  
  Based on:
  http://www.arduino.cc/en/Tutorial/Blink
*/

# define LED 9

void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);            // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);             // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
