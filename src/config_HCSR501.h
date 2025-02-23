/*  
  OpenMQTTGateway  - ESP8266 or Arduino program for home automation 

   Act as a wifi or ethernet gateway between your 433mhz/infrared IR signal  and a MQTT broker 
   Send and receiving command by MQTT
 
   This files enables to set your parameter for the HC SR-501 sensor
  
    Copyright: (c)Florian ROBERT
  
    This file is part of OpenMQTTGateway.
    
    OpenMQTTGateway is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenMQTTGateway is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*----------------------------USER PARAMETERS-----------------------------*/
/*-------------DEFINE YOUR MQTT PARAMETERS BELOW----------------*/
#define subjectHCSR501toMQTT    Base_Topic Gateway_Name "/HCSR501toMQTT"

#define TimeBeforeStartHCSR501 60000 //define the time necessary for HC SR501 init

/*-------------------PIN DEFINITIONS----------------------*/
#if defined(ESP8266) 
  #define HCSR501_PIN D5
#elif defined(ESP32)
  #define HCSR501_PIN 5
#else
  #define HCSR501_PIN 7
#endif


void setupHCSR501();
void MeasureHCSR501();