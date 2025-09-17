#include <SD.h>

class BE {
  private:
    File dataFile;
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
    BE(File _dataFile, float _timeInterval, int _motorPercent, int _peltier1Percent, int _peltier2Percent);
    bool collectData();
    bool writeData();
    bool initDisplay();
    bool display();
    bool handleInput();
    ...


};