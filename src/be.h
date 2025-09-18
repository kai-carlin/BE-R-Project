#ifndef BE_H
#define BE_H

#include <SD.h>
#include "pinMappings.h"

class BE {
  private:
    File dataFile;
    bool sdCardValidFlag;
    float timeInterval; //time between each datapoint in logged
    int motorPercent; //0-255 value of pump level
    int peltier1Percent; //0-255 value of peltier1 level
    int peltier2Percent; //0-255 value of peltier2 level
    struct dataPoints{
      float temp1; // temperature sesnor on main flask
      float temp2; //temperature sensor on output flask1
      float temp3; //temperature sensor on output flask2
      float psi; //psi sesnor along intake tube
      int motor; //copy of motor set level
      float ameter; //ameter rating on psu
      int peltier1; //copy of peltier1 set level
      int peltier2; //copy of peltier2 set level
    };

  public:
    BE(); //fix this
    BE(File _dataFile, pinMappings& pins, float _timeInterval, int _motorPercent, int _peltier1Percent, int _peltier2Percent);
    bool collectData(); //pull data from sensors and store in struct
    bool writeData(); //turn on light while writing to indicate unresponsive
    bool initDisplay();
    bool display(); //update screen
    bool handleInput(); //use polling, add pauses and mayhaps even schmitt triggers.
    


};

#endif