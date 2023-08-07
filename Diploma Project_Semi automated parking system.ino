#include <Stepper.h>
 int StepsPerRevolution=400;
  const int stepPinX = 2; //X.STEP
  const int dirPinX = 5; // X.DIR
  const int stepPinZ =4;
  const int dirPinZ =7;
  const int stepPinY=3;
  const int dirPinY=6;

Stepper myStepper1(StepsPerRevolution, stepPinX, dirPinX );
Stepper myStepper2(StepsPerRevolution, stepPinZ, dirPinZ );

int vrx = A0; 
int vrz = A1; 

int vrx_data = 0; 
int vrz_data = 0; 

int x=0;
int z=0;
 
 void setup() {
 // Sets the two pins as Outputs
 Serial.begin(9600); 
 myStepper1.setSpeed(500);
 myStepper2.setSpeed(500);

 pinMode(stepPinX,OUTPUT); 
 pinMode(dirPinX,OUTPUT);
 pinMode(stepPinZ,OUTPUT); 
 pinMode(dirPinZ,OUTPUT);

 pinMode(vrx , INPUT); 
 pinMode(vrz, INPUT); 


 }

 void loop(){
joystick(); 

 }

 void joystick(){
vrx_data = analogRead(vrx);
Serial.print("Vrx:"); 
Serial.println(vrx_data); 
 
 
// to stop the stepper motor
if ( (vrx_data > 490)  &&   (vrx_data < 510)   )
{
 
;
  
}
 
 
if ((vrx_data > 900)  && ((vrz_data > 490)  &&   (vrz_data < 530)) )
{
 
 myStepper1.step(-StepsPerRevolution);
x = x + 1; 

  
}
 
 
 
 
if ( (vrx_data < 100)  && ((vrz_data > 490)  &&   (vrz_data < 530))  )
{
myStepper1.step(StepsPerRevolution);
x = x - 1; 

}

//2nd stepper motor
vrz_data = analogRead(vrz);
Serial.print("Vrz:"); 
Serial.println(vrz_data); 
 
 
// to stop the stepper motor
if ( (vrz_data > 490)  &&   (vrz_data < 510)   )
{
 
;
  
}
 
 
if ( (vrz_data > 900) && ((vrx_data > 490)  &&   (vrx_data < 530)) )
{
 
 myStepper2.step(-StepsPerRevolution);
z= z + 1; 

  
}
 
 
 
if ( (vrz_data < 100)  && ((vrx_data > 490)  &&   (vrx_data < 530)) )
{
myStepper2.step(StepsPerRevolution);
z = z - 1; 

}


}
