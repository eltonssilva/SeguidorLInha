

#define motor_d_1 5
#define motor_d_2 6

#define motor_e_1 10
#define motor_e_2 11

#define sensor_e 12
#define sensor_d 7

#define LINHA   1



void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

config_motor();
config_sensor();


}

void loop() {
  // put your main code here, to run repeatedly:

if((sensor_e == LINHA) && (sensor_d != LINHA)){
  robot_left();

}else if((sensor_e != LINHA) && (sensor_d == LINHA)){
  robot_right();

}else if((sensor_e != LINHA) && (sensor_d != LINHA)){
  robot_front();

}else if((sensor_e == LINHA) && (sensor_d == LINHA)){
  robot_stop();

}

}

