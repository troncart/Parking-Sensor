/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Parking Sensor**************
***********13-07-2019**************
*/
 

#include <Ultrasonic.h> 
Ultrasonic ultrasonic(6,5); // pin 6 trig , pin 5 echo
const int buzzer = 7; 


  void setup()
    { 
      pinMode(buzzer,OUTPUT); // pin buzzer
    } 
    void loop()
    { 
      int dist = ultrasonic.Ranging(CM); 
      if (dist < 100) 
      { 
        tone(buzzer,1000); 
        delay(40); 
        noTone(buzzer); 
        delay(dist*4); 
      } 
    delay(100);  
    }  
