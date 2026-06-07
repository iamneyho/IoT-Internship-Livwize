/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/
int LED1 = 2;
int LED2 = 22;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an out  pinMode(LED1, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}
//Blink for 5 times in 1 sec and alternate b/w led1 and led2
void loop() {
  //led1
   for (int i = 0; i < 5; i++) {
    digitalWrite(LED1, HIGH);
    delay(200);
    digitalWrite(LED1, LOW);
    delay(200);
  }
  //led2
   for (int i = 0; i < 5; i++) {
    digitalWrite(LED2, HIGH);
    delay(200);
    digitalWrite(LED2, LOW);
    delay(200);
  }
}
