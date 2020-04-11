/*
 * Script for handling an electromagnet using a relay
 * (The same wiring and code applies for a push-pull solenoid, or a lock-style solenoid
 * 
 * Tested with:
 * - 1 relay (5V)
 * - electromagnet (12V version and 6V version) / push-pull solenoid (12V)
 */
 

int relay_pin = 8;
int relaystat = 0;

void setup() {
  
  // Relay / Electromagnet
  pinMode(relay_pin, OUTPUT);
  digitalWrite(relay_pin, HIGH);

}

void loop() {
  
  // turn relay (and thus electromagnet) on and off
  if (relaystat == 0) {
    digitalWrite(relay_pin, LOW); // on
    relaystat = 1;
    delay(5000);
  } else {
    digitalWrite(relay_pin, HIGH); // off
    relaystat = 0;
    delay(1000);
  }
    
}
