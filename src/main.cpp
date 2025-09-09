#include <Arduino.h>
#include <SD.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}


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
    BE(){
      dataFile = SD.open("Log.txt", FILE_WRITE);
    }
    bool collectData(){
      return false;
    }
    bool writeData(){
      return false;
    }

};