

#define motor_d_1 5
#define motor_d_2 6

#define motor_e_1 10
#define motor_e_2 11

#define sensor_e 12
#define sensor_d 7





void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(motor_d_1, OUTPUT);
pinMode(motor_d_2, OUTPUT);
pinMode(motor_e_1, OUTPUT);
pinMode(motor_e_2, OUTPUT);
pinMode(sensor_e, INPUT);
pinMode(sensor_d, INPUT);


digitalWrite(motor_d_1, 0);
digitalWrite(motor_d_2, 0);
digitalWrite(motor_e_1, 0);
digitalWrite(motor_e_2, 0);

}

void loop() {
  // put your main code here, to run repeatedly:
    
  Serial.println("front");
  robot_front();
  delay(2000);

  Serial.println("Stop");
  robot_stop();
  delay(2000);

  Serial.println("Back");
  robot_back();
  delay(2000);

  Serial.println("left");
  robot_left();
  delay(2000);

  Serial.println("right");
  robot_right();
  delay(2000);

  Serial.println("360 Esquerda");
  rotate_left();
  delay(2000);

  Serial.println("360 Direita");
  rotate_right();
  delay(2000);

}

