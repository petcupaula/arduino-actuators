/*
 * Script for handling an electromagnet using a relay
 * 
 * Include:
 * - 1 relay (5V)
 * - 1 electromagnet (12V)
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
