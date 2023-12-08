/**
  servo motor
  @author Guilherme Holi

*/

//incluir uma biblioteca
#include <Servo.h>
//criar um objeto usando uma biblioteca
Servo servo1;

void setup() {
  servo1.attach(9); //servo ligado no pino 9 (PWM)

}

void loop() {
  servo1.write(0); //girar o servo (0 graus) (0 a 180)
  delay(1000);
  servo1.write(180); //girar o servo (180 graus) (0 a 180)
  delay(1000);

}
