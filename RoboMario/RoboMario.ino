
#include "define.h"


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

