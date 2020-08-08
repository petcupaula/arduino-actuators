/* 
 *  Suction cup control using transistor 
 *  
 */

int pumpPin = 3;
int valvePin = 5;

void setup() 
{ 
  Serial.begin(9600);
  
  pinMode(pumpPin, OUTPUT);
  digitalWrite(pumpPin, LOW); // turn off by default
  pinMode(valvePin, OUTPUT);
  digitalWrite(valvePin, LOW); // turn off by default
} 
 
 
void loop() 
{ 
  // Simple demostration - sucking for a few seconds and then releasing

  // Start the pump, ensure valve is off
  digitalWrite(pumpPin, HIGH); // on
  digitalWrite(valvePin, LOW); // off

  delay(5000);

  // Turn off the pump, turn the valve on
  digitalWrite(valvePin, HIGH); // on
  digitalWrite(pumpPin, LOW); // off
  
  delay(5000);
} 
