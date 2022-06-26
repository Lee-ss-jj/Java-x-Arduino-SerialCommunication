#include <SoftwareSerial.h>

SoftwareSerial my(8,9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  my.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(my.available()) {
    int val = my.read();
    if(val == 1) {
      Serial.println("up");
    } else if(val == 2) {
      Serial.println("down");
    } else if(val == 3) {
      Serial.println("left");
    } else if(val == 4) {
      Serial.println("right");
    } else if(val == 5) {
      Serial.println("grip");
    }
  }
}
