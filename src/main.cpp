#include <Arduino.h>
#include "be.h"

const struct pinMappings{
  int SDsda = 0;
};

File _dataFile;

BE reactor();

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  
}

void loop() {
  // put your main code here, to run repeatedly:
}

