int LED_R = 13;
int LED_Y = 5;
int LED_G = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, Welcome to traffic light!");
  pinMode(LED_R, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_G, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_Y, LOW);
  digitalWrite(LED_G, LOW);
  Serial.print("RED:");
  Serial.println("Stop");
  delay(3000);
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_Y, HIGH);
  digitalWrite(LED_G, LOW);
  Serial.print("YELLOW:");
  Serial.println("Caution");
  delay(1000);
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_Y, LOW);
  digitalWrite(LED_G, HIGH);
  Serial.print("GREEN:");
  Serial.println("Go");
  delay(3000);
}
