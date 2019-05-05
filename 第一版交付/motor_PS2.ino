#include <PS2X_lib.h>

PS2X ps2x;
void _E5_90_8E_E9_80_80() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}

void _E5_B7_A6_E8_BD_AC() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}

void _E5_81_9C_E6_AD_A2() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}

void _E5_89_8D_E8_BF_9B() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}

void _E5_8F_B3_E7_A7_BB() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}

void _E5_8F_B3_E8_BD_AC() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}

void _E5_B7_A6_E7_A7_BB() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}

void setup()
{
  Serial.begin(57600);
  ps2x.config_gamepad(12, 11,10,13, false, false);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  ps2x.read_gamepad(false, 0);if (ps2x.Button(PSB_PAD_UP)) {
    _E5_89_8D_E8_BF_9B();

  } else if (ps2x.Button(PSB_PAD_DOWN)) {
    _E5_90_8E_E9_80_80();
  } else if (ps2x.Button(PSB_PAD_RIGHT)) {
    _E5_B7_A6_E8_BD_AC();
  } else if (ps2x.Button(PSB_PAD_LEFT)) {
    _E5_8F_B3_E8_BD_AC();
  } else if (ps2x.Button(PSB_SQUARE)) {
    _E5_B7_A6_E7_A7_BB();
  } else if (ps2x.Button(PSB_CIRCLE)) {
    _E5_8F_B3_E7_A7_BB();
  } else {
    _E5_81_9C_E6_AD_A2();

  }
  delay(100);

}
