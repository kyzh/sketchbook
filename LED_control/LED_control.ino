
//3 Potentiometer
int const greenPotPin = A0;
int const redPotPin   = A1;
int const bluePotPin  = A2;

// Our RGB LED
const int greenLEDPin = 9;
const int redLEDPin   = 11;
const int blueLEDPin  = 10;

// Placeholder variables (read)
int redPotValue   = 0;
int greenPotValue = 0;
int bluePotValue  = 0;

// Placeholder varaible (write)
int redLEDValue   = 0;
int greenLEDValue = 0;
int blueLEDValue  = 0;

void setup() {
  // We use a Serial connection to debug the data.
  Serial.begin(9600);
  
  // We initialise the LED
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin,   OUTPUT);
  pinMode(blueLEDPin,  OUTPUT);
}

void loop() {
  // We read the data from the potentiometer
  greenPotValue = analogRead(greenPotPin);
  redPotValue   = analogRead(redPotPin);
  bluePotValue  = analogRead(bluePotPin);

  // We map the pot value ranging 0-1023
  // To the LED that accept 0-255  
  greenLEDValue = map(greenPotValue, 0, 1023, 0, 255);
  redLEDValue   = map(redPotValue, 0, 1023, 0, 255);
  blueLEDValue  = map(bluePotValue, 0, 1023, 0, 255);
  
  // DEBUG: We communitate the values  
  Serial.print("Green:");
  Serial.print(greenLEDValue);
  Serial.print("\t\tRed:");
  Serial.print(redLEDValue);
  Serial.print("\t\tBlue:");
  Serial.println(blueLEDValue);
  delay (15);
  
  // We write the value to the pin 
  /*
  analogWrite(redLEDPin, redLEDValue);
  analogWrite(greenLEDPin, greenLEDValue);
  analogWrite(blueLEDPin, blueLEDValue);
  delay(15);
  */
  analogWrite(9, 250);
  analogWrite(10, 250);
  analogWrite(11, 250);
}
