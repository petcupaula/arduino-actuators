 /* 
 *  Electromagnet control using transistor 
 *  
 */

int magnetPin = 3;

void setup() 
{ 
  pinMode(magnetPin, OUTPUT);
  Serial.begin(9600);

  digitalWrite(magnetPin, LOW); // turn off by default
} 
 
 
void loop() 
{ 
  digitalWrite(magnetPin, HIGH); // HIGH = magnetized
  Serial.println("HIGH");
  delay(5000);
  
  digitalWrite(magnetPin, LOW); // LOW = not magnetized
  Serial.println("LOW");
  delay(5000);
} 
