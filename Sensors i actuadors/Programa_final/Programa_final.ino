
/**************************************************************************
**                                                                       **
**                                                                       **
**                                TÍTOL:                                 **
**                                                                       **
**                                                                       **
**                                                                       **
**                                                                       **
**NOM: Bogdan Laurentiu Cucura                            DATA:          **
**************************************************************************/

//****************************INCLUDE**************************************
#include <IRremote.h>
#include <IRremoteInt.h>
//****************************VARIABLE*************************************
int receiver = 11; 
int redPin = 6;
int greenPin = 5;
int bluePin = 3;
int delayTime = 200;
IRrecv irrecv(receiver);     
decode_results results;

//****************************SETUP****************************************

void setup()                  //configura el final de salida 
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT); 
pinMode (receiver, INPUT);  
Serial.begin(9600);
Serial.println("IR Receiver Button Decode"); 
irrecv.enableIRIn(); 
}


//****************************LOOP*****************************************
void loop()

{                 //configura el bucle 
 
switch(results.value) 
{
case 0xFF6897: //0
analogWrite (redPin, 0);
analogWrite (greenPin, 255);
analogWrite (bluePin, 0); 
break;

case 0xFF30CF: //1
 
analogWrite (redPin, 255);
analogWrite (greenPin, 0);
analogWrite (bluePin, 0);
break;

case 0xFF18E7: //2

analogWrite (redPin, 0);
analogWrite (greenPin, 0);
analogWrite (bluePin, 255);
break;

case 0xFF7A85: //3

analogWrite (redPin, 255);
analogWrite (greenPin, 255);
analogWrite (bluePin, 255);
break;

case 0xFFE21D: // Func/Stop


irrecv.resume();
 
}
}




//****************************FUNCIONS*************************************
