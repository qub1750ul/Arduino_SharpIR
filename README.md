# SharpIR

Compatible architecture: ALL

##Description

Arduino library that allows to acquire distance data from a Sharp analog distance sensor

##Currently supported sensor models

- GP2YA41SK0F  
- GP2Y0A21YK0F  
- GP2Y0A02YK0F  

##Sintax & short command reference

- Creating an istance  

    *SharpIR sensorName(sensorModel, sensorPin);*   
    
    **sensorName**  : the name of the object   
    **sensorModel** : the model code of the sensor (e.g. GP2YA41SK0F)  
    **sensorPin**   : the analog pin where the sensor Vout pin is attached  

- Acquiring data

  ***sensorName.getDistance();***  : function that returns an **uint8\_t** type value that is the distance in centimeters from the sensor and the object in fromt of it  

##About the author & license info

Created by ***Giuseppe Masino, 28 may 2016***
Author URL: http://www.facebook.com/peppe.masino1

This library and the relative example files are released under the license
**CreativeCommons Attribution-ShareAlike 4.0 International**

License info: http://creativecommons.org/licenses/by-sa/4.0/  