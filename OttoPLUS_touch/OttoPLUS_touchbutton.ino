//-- Otto DIY+ with Touch Sensor! (ottodiy.com)
//-- CC BY SA
//-----------------------------------------------------------------
#include <Servo.h> 
#include <Oscillator.h>
#include <US.h>
#include <Otto.h>
#include <CapacitiveSensor.h>


Otto Otto;  //This is Otto!
//---------------------------------------------------------
//-- First step: Make sure the pins for servos are in the right position
/*
           ----/\----     <== Touch Sensor Pin A1
         --------------- 
        |     O   O     |
        |---------------|
YR 3==> |               | <== YL 2
         --------------- 
            ||     ||
RR 5==>   -----   ------  <== RL 4
         |-----   ------|
*/
  #define PIN_YL 2 //servo[2]
  #define PIN_YR 3 //servo[3]
  #define PIN_RL 4 //servo[4]
  #define PIN_RR 5 //servo[5]
//  const int sensorPin = A1;
///////////////////////////////////////////////////////////////////
//-- Global Variables -------------------------------------------//
///////////////////////////////////////////////////////////////////
//-- Movement parameters
int movimiento = 1;
//---------------------------------------------------------
bool obstacleDetected = false;

//-- Touch
CapacitiveSensor   cs_4_2 = CapacitiveSensor(7, 6);       // 330-ohmn or 1mohm or 2m ohm resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
int treshold = 500; // the minimum value for turning next option

///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
void setup(){
  //Set the servo pins
  Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true, -1, 13, 8, 9);
//  pinMode(sensorPin, INPUT);
  Otto.home();
  Otto.sing(S_happy); // a happy Otto :)

Serial.begin(9600);
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
}
///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
///////////////////////////////////////////////////////////////////
void loop() {
  long start = millis();
  long sensorValue =  cs_4_2.capacitiveSensor(30);
   int estado = LOW;
   Serial.print(sensorValue);                  // print sensor output 1
  Serial.print("\n");
  if (sensorValue > treshold) {
    estado = HIGH;
  }

    if(obstacleDetected){ 
    Serial.println("OBJETO DETECTADO"); 
               Otto.sing(S_fart1);  
               Otto.walk(3,500,-1); 
               Otto.tiptoeSwing(2,500,40); 
               Otto.home(); 
               Otto.sing(S_fart3);   
             delay(50); 
             obstacleDetector(); 
             }        
         else{ 
            obstacleDetector(); 
        }           
 
   //mandar mensaje a puerto serie en función del valor leido
   if (estado == HIGH)
   {
    if (movimiento == 1)
    {
      Otto.sing(S_surprise);
      Otto.walk(2,1300,1); 
      Otto.home();      
    }
    if (movimiento == 2)
    {
      Otto.sing(S_OhOoh);
      Otto.moonwalker(2,1000,30,1); 
      Otto.home();
    }
    if (movimiento == 3)
    {
      Otto.sing(S_happy);
      Otto.crusaito(2,3000,40,1); 
      Otto.home();
    }
    if (movimiento == 4)
    {
      Otto.sing(S_superHappy);
      Otto.shakeLeg(2,1000,1); 
      Otto.home();
    }
    if (movimiento == 5)
    {
      Otto.sing(S_fart1);
      Otto.flapping(2,500,40,1); 
      Otto.home();
    }  
    if (movimiento == 6)
    {
      Otto.sing(S_confused);
      Otto.tiptoeSwing(2,1000,30); 
      Otto.home();
    }
    if (movimiento == 7)
    {
      Otto.sing(S_connection);
      Otto.swing(2,500,40); 
      Otto.home();
    }
    if (movimiento == 8)
    {
      Otto.sing(S_disconnection);
      Otto.updown(2,1000,30); 
      Otto.home();
    }
    if (movimiento == 9)
    {
      Otto.sing(S_buttonPushed);
      Otto.jitter(10,500,40); 
      Otto.home();
    }
    if (movimiento == 10)
    {
      Otto.sing(S_fart3);      
      Otto.ascendingTurn(2,500,50); 
      Otto.home();
    }                
    if (movimiento == 11)
    {
      Otto.sing(S_sad);      
      Otto.jump(2,500); 
      Otto.home();
    }                
    if (movimiento == 12)
    {
      Otto.sing(S_cuddly);      
      Otto.turn(3,1000,1); 
      Otto.home();
    }
    if (movimiento == 13)
    {
      Otto.sing(S_superHappy);      
      Otto.bend(2,1000,1); 
      Otto.home();
    }    
 
    movimiento = movimiento +1;
    if (movimiento == 14)
    {
      movimiento = 1;             
    }
   }
}

///////////////////////////////////////////////////////////////////
//-- Function to read distance sensor & to actualize obstacleDetected variable
void obstacleDetector(){
   int distance = Otto.getDistance();
        if(distance<15){
          obstacleDetected = true;
        }else{
          obstacleDetected = false;
        }
}