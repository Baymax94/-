#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  150
#define SERVOMAX  600

void setup()
{
   pwm.begin();

  pwm.setPWMFreq(50);
  pwm.setPWM(0,0,350);
  pwm.setPWM(1,0,320);
  pwm.setPWM(2,0,450);
  pwm.setPWM(3,0,140);
  pinMode(A0, INPUT);
}

void loop()
{
  if (digitalRead(A0) == 1) {
    for (int i = 200; i <= 350; i = i + (1)) {
      pwm.setPWM(2,0,i);
      pwm.setPWM(3,0,(map(i, 200, 350, 350, 200)));
      delay(10);
    }
    for (int i = 350; i >= 200; i = i + (-1)) {
      pwm.setPWM(2,0,i);
      pwm.setPWM(3,0,(map(i, 350, 200, 200, 350)));
      delay(10);
    }

  } else {
    pwm.setPWM(0,0,280);
    pwm.setPWM(1,0,260);
    pwm.setPWM(2,0,140);
    pwm.setPWM(3,0,450);
    delay(100);

  }

}
