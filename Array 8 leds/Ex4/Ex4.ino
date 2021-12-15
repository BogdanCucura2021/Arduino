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



//****************************VARIABLE*************************************

const byte led0=5;
const byte buttonPin=2;
byte buttonState = 0;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
pinMode (led0, OUTPUT);
pinMode (buttonPin, INPUT);

} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
buttonState = digitalRead(buttonPin); 

if (buttonState == 0)
{
  digitalWrite(led0, LOW);
}
else  
{
  digitalWrite(led0, HIGH);
}
delay(200);
}
//****************************FUNCIONS*************************************
