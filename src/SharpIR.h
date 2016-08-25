/*
 * SharpIR
 * Library for the acquisition of distance data from Sharp IR sensors
 *
 * Created by Giuseppe Masino, 28 may 2016
 * Author URL http://www.facebook.com/peppe.masino1
 *
 * This library and the relative example files are released under the license
 * CreativeCommons ShareAlike-Attribution 4.0 International
 *
 * License info: http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef SharpIR_lib
#define SharpIR_lib

#include <Arduino.h>

#define GP2YA41SK0F "GP2YA41SK0F"
#define GP2Y0A21YK0F "GP2Y0A21YK0F"
#define GP2Y0A02YK0F "GP2Y0A02YK0F"

class SharpIR
{
  public:
    
    SharpIR(String _sensorType, uint8_t _sensorPin);
    
    uint8_t getDistance();
  
  private:
    
    String sensorType;
    uint32_t pin;
  
  protected:
    
    uint8_t distance;
    uint32_t lastTime, sampleTime;
};

#endif