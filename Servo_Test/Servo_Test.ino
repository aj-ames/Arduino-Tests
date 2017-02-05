// Include the Servo library 
int i;
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   for(i=0;i<=180;i++)
   {
    Servo1.write(i);
    delay(50);
   }
   // Make servo go to 90 degrees 
   //Servo1.write(90); 
   //delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000); 
}
