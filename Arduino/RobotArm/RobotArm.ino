#include <Servo.h>
#include <SoftwareSerial.h>

Servo servo3;
Servo servo4;
Servo servo5;

SoftwareSerial my(8,9);

void setup() {
  Serial.begin(19200);
  my.begin(9600);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  set();
}

void loop() {
  if (my.available()) {
    int val = my.read();
    //Up
    if (val == 3) {
      servo3.write(servo3.read() + 2);
    }
    //Down
    if (val == 4) {
      servo3.write(servo3.read() - 2);
    }
    //Left
    if (val == 1) {
      servo4.write(servo4.read() + 5);
    }
    //Right
    if (val == 2) {
      servo4.write(servo4.read() - 5);
    }
    //Grip
    if (val == 5) {
      servo5.write(60);
      delay(3000);
      servo5.write(0);
    }
  }
}

void set() {
  servo3.write(90);
  servo4.write(90);
  servo5.write(0);
}
