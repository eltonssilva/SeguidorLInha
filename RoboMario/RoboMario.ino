

#define motor_d_1 5
#define motor_d_2 6

#define motor_e_1 10
#define motor_e_2 11





void setup() {
  // put your setup code here, to run once:

pinMode(motor_d_1, OUTPUT);

digitalWrite(motor_d_1, 0);
digitalWrite(motor_d_1, 0);
digitalWrite(motor_d_1, 0);
digitalWrite(motor_d_1, 0);

}

void loop() {
  // put your main code here, to run repeatedly:

  robot_front();
  delay(2000);
  robot_stop();
  delay(2000);
  robot_back();
  delay(2000);
  robot_left();
  delay(2000);
  robot_right();
  delay(2000);

}

