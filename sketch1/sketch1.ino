#include <Servo.h>// Loading the servo library 
/*
  Code for checking the servo motor's position 
  // put your main code here, to run repeatedly:
  // In this we do three main things prompt the user about the input, take the input and process the input.
  Serial.println(" where would you like to position the aruino ?");// Read user input 
  while(Serial.available() == 0){
    }// hangs untill the user uses the input 
  pos= Serial.parseInt();// write the value of the server
  
  check.write(pos);

*/
int pos =0; // declaring the position value of the servo 
int servoPin =8; // telling the arduino which port its connected to 
int servoDelay=25; // introducing delay in the function of arduino
 
Servo check; // Creating a servo motor object named check 

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  check.attach(servoPin);

}

void loop() {
  // pos=50;
  for (pos=25;pos<=160;pos=pos+1){
    check.write(pos);
    delay(servoDelay);  
  }
  
  for(pos=160;pos>=25;pos=pos-1){
    check.write(pos);
    delay(servoDelay);  
  }
  
}
