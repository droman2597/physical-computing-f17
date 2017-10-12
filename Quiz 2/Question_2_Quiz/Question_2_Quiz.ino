int ledPin = 8;
int buttonPin = 10;
void setup() {
pinMode(buttonPin, INPUT_PULLUP);
Serial.begin(9600);
}
void loop() {
int buttonState = digitalRead(buttonPin);
if(buttonState == 0) {
    digitalWrite(ledPin, LOW);
    delay(500);
    digitalWrite(ledPin, HIGH);
    delay(500);
  }
}
