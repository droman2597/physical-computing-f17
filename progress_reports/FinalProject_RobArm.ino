#include <Servo.h> 
Servo servo;  
Servo servo2; 
Servo servo3;
Servo servo4;
int servoPin = 9;
int servoPin2 = 10;
int servoPin3 = 11;
int servoPin4 = 6;
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin);
  servo.attach(servoPin2);
  servo.attach(servoPin3);
   servo.attach(servoPin4);
} 
 
 
void loop() 
{ 
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(0);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
} 
