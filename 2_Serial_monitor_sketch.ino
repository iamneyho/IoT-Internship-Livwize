int buttonState = 0;
int loopCount = 0;

void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  Serial.println("---- Program started ----");
}

void loop() {
  loopCount++;
  buttonState = digitalRead(12);

  Serial.print("[Loop ");
  Serial.print(loopCount);
  Serial.print("] Pin 12 is: ");

  if (buttonState == 0) {
    Serial.println("PRESSED");
  } else {
    Serial.println("not pressed");
  }

  delay(200);
}
