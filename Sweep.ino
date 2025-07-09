#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  
  for (int i = 0; i <= 180; i = i + 10) {
    servo1.write(i);
    
    delay(50);
  }
    delay(500);
    
 
  
  for (int i = 0; i <= 180; i = i + 10) {
    servo2.write(i);
    
    delay(50);
  }
  delay(500);

  
  for (int i = 0; i <= 180; i = i + 10) {
    servo3.write(i);
    
    delay(50);
  }
  delay(500);

  
  for (int i = 0; i <= 180; i = i + 10) {
    servo4.write(i);
    
    delay(50);
  }
  delay(1000);

  for (int i = 180; i >= 0; i = i - 10) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    delay(50);
  }
  delay(1000);
}
