/*
 * Script for handling a vacuum suction cup with an air pump and solenoid valve
 * Makes use of relays
 * 
 * General operation:
 *   * Move suction cup on top of the object to be picked up
 *   * Turn on pump, leave solenoid valve at rest (means there is a direct connection between pump and suction cup)
 *   * Move to pick up object 
 *   * Turn on solenoid valve (the connection on the vent is blocked, and object can fall)
 *   
 * Inspired by: https://www.open-electronics.org/robot-arm-with-pick-place-part-2/
 */
 

int pump = 8;
int valve = 7;

void setup() {
  
  // Relays setup
  pinMode(pump, OUTPUT);
  pinMode(valve, OUTPUT);

  // Relays initial state - pump and valve are off
  digitalWrite(pump, HIGH);
  digitalWrite(valve, HIGH);
}

void loop() {

  // Simple demostration - sucking for a few seconds and then releasing
  
  // Start the pump, ensure valve is off
  digitalWrite(pump, LOW); // on
  digitalWrite(valve, HIGH); // off

  delay(5000);

  // Turn off the pump, turn the valve on
  digitalWrite(valve, LOW); // on
  digitalWrite(pump, HIGH); // off
  
  delay(5000);
}
