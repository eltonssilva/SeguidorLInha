

void config_motor(){

pinMode(motor_d_1, OUTPUT);
pinMode(motor_d_2, OUTPUT);
pinMode(motor_e_1, OUTPUT);
pinMode(motor_e_2, OUTPUT);

digitalWrite(motor_d_1, 0);
digitalWrite(motor_d_2, 0);
digitalWrite(motor_e_1, 0);
digitalWrite(motor_e_2, 0);

}

void config_sensor(){

  pinMode(sensor_e, INPUT);
  pinMode(sensor_d, INPUT);

}