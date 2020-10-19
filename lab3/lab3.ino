int wiperPin = A0;
int knobValue= 0, redPin=9, greenPin=8, bluePin=7;


void setup() {
  pinMode(wiperPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
knobValue= analogRead(wiperPin);

if(knobValue<341) {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin, LOW);
}
else if(knobValue>682) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin, HIGH);
}
else {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin, LOW);
}
}
