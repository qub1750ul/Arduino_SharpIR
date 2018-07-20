# SharpIR
An Arduino library that allows to acquire distance data from a Sharp analog distance sensor

![Project status badge](https://img.shields.io/badge/Project%20status-ACTIVE-brightgreen.svg)
[![License badge](https://img.shields.io/badge/license-custom%20CC%20BY--SA%204.0-brightgreen.svg)](https://github.com/qub1750ul/Arduino_L293/blob/master/LICENSE.md)  
[![Arduino Library specification badge](https://img.shields.io/badge/Arduino%20Library%20Specification%20-rev.%202.1-blue.svg)](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5:-Library-specification)
[![Arduino IDE compatibility badge](https://img.shields.io/badge/Arduino%20IDE%20compatibility-1.6.10+-blue.svg)](https://www.arduino.cc/en/Main/Software)  
[![Keep a Changelog specification badge](https://img.shields.io/badge/Keep%20a%20Changelog%20Specification-1.0.0-orange.svg)](http://keepachangelog.com)
[![Semantic Versioning specification badge](https://img.shields.io/badge/Semantic%20Versioning%20Specification-2.0.0-orange.svg)](http://semver.org)

## Currently supported sensor models

- GP2Y0A41SK0F  
- GP2Y0A21YK0F  
- GP2Y0A02YK0F  

## Usage

- Adding the library to the sketch

~~~c++
#include <SharpIR.h>
~~~

- Creating an istance  

~~~c++
SharpIR sensorName(sensorModel, sensorPin);
~~~
~~~
sensorName	: the name of the object   
sensorModel	: the model code of the sensor (e.g. GP2YA41SK0F)  
sensorPin	: the analog pin where the sensor Vout pin is attached  
~~~    

- Acquiring data

~~~c++
sensorName.getDistance();
sensorName.getDistance( avoidBurstRead );
~~~
~~~
avoidBurstRead	: can be true or false
~~~

The above method returns an uint8_t type value that is the distance in centimeters from the sensor and the object in front of it.  
By default burst reads are avoided but this causes a delay of 20ms on every call.
In order to speed up the sketch is possible to allow bust reads by setting the parameter **avoidBurstRead** to **false**, in this way:

~~~c++
sensorName.getDistance( false );
~~~

## Getting started

### Installation
#### via the Arduino Library Manager

1. Open the Arduino IDE
2. Go to Sketch > Include Library > Manage Libraries
3. Search **SharpIR**
4. Click on **"SharpIR** by **Giuseppe Masino (HackerInside)"**
5. Select the latest version and then click on **install**
6. When the download is complete restart the IDE

![How to open the library manager](https://github.com/HackerInside0/support_repo/blob/master/generic/ArduinoLibraryManager.png  "Go to Sketch > Include Library > Manage Libraries")

![How to download from the library manager](https://github.com/HackerInside0/support_repo/blob/master/Arduino_SharpIR/LibraryManagerTutorial.png  "Click on **SharpIR** by **Giuseppe Masino (HackerInside)**")

#### via GitHub ( manual installation )

1. Download the library from GitHub
2. Copy the zip file in the arduino library folder
3. If already open, restart the IDE

![How to download from github](https://github.com/HackerInside0/support_repo/blob/master/Arduino_SharpIR/downloadFromGitHub.png "Click on **SharpIR** by **Giuseppe Masino (HackerInside)**")

### Where to find help?

First be sure to read the FAQs in this repository ( if present ) and/or the [generic FAQs](https://www.facebook.com/notes/giuseppe-masino/faqs-about-my-works/197854657355058).

Use the GitHub issue tracker for techincal troubles about the implementation and to report bugs, for other requests there is [THIS PAGE](http://www.facebook.com/dev.hackerinside/).


## License ##
<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">
<img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" />
</a>
<br />
<span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">The SharpIR Library</span>
by <a xmlns:cc="http://creativecommons.org/ns#" href="https://facebook.com/dev.giuseppemasino" property="cc:attributionName" rel="cc:attributionURL">Giuseppe Masino </a>
is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>

If you need permissions that are beyond the scope of this license, you can ask me through this contacts,
in order of preference:  

- Telegram : <a xmlns:cc="http://creativecommons.org/ns#" href="https://telegram.me/qub1750ul" rel="cc:morePermissions">https://telegram.me/qub1750ul</a>
- Twitter : <a xmlns:cc="http://creativecommons.org/ns#" href="https://telegram.me/qub1750ul" rel="cc:morePermissions">https://twitter.com/qub1750ul</a>
- Facebook page : <a xmlns:cc="http://creativecommons.org/ns#" href="https://facebook.com/dev.giuseppemasino/" rel="cc:morePermissions">https://facebook.com/dev.giuseppemasino/</a>

The license text can be found in the LICENSE.md file
