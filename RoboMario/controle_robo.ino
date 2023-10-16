/*Frente
motor_d_1 = 1
motor_d_2 = 0
motor_e_1 = 1
motor_e_2 = 0

Tras
motor_d_1 = 0
motor_d_2 = 1
motor_e_1 = 0
motor_e_2 = 1


Stop
motor_d_1 = 0
motor_d_2 = 0
motor_e_1 = 0
motor_e_2 = 0
*/


void robot_front(){

  digitalWrite(motor_d_1, HIGH);
  digitalWrite(motor_d_2, LOW);
  digitalWrite(motor_e_1, HIGH);
  digitalWrite(motor_e_2, LOW);
  
}

void robot_back(){

  digitalWrite(motor_d_1, LOW);
  digitalWrite(motor_d_2, HIGH);
  digitalWrite(motor_e_1, LOW);
  digitalWrite(motor_e_2, HIGH);

}

void robot_stop(){

  digitalWrite(motor_d_1, LOW);
  digitalWrite(motor_d_2, LOW);
  digitalWrite(motor_e_1, LOW);
  digitalWrite(motor_e_2, LOW);
  
}


void robot_left(){

  digitalWrite(motor_d_1, HIGH);
  digitalWrite(motor_d_2, HIGH);
  digitalWrite(motor_e_1, LOW);
  digitalWrite(motor_e_2, LOW);

}


void robot_right(){

  digitalWrite(motor_d_1, LOW);
  digitalWrite(motor_d_2, LOW);
  digitalWrite(motor_e_1, HIGH);
  digitalWrite(motor_e_2, HIGH);

}