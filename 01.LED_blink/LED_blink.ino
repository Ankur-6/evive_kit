// Evive kit LED blink 

int LEDPin = 3; // initialize the led pin number

void setup() {
  pinMode(LEDPin, OUTPUT); // // initialize digital pin LEDPin as an output
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LEDPin, HIGH); // turn the led on (HIGH is the voltage level)
  Serial.println("LED is turned on");
  delay(1000); // wait for a second
  digitalWrite(LEDPin, LOW); // turn the led off by making the voltage LOW
  Serial.println("LED is turned off");
  delay(1000); // wait for a second
}
