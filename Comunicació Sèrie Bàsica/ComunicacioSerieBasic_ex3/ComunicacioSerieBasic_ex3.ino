/**************************************************************************
**                                                                       **
**                                                                       **
**                    TÍTOL: Comunicació Sèrie Bàsic                     **
**                                                                       **
**                                                                       **
**                                                                       **
**                                                                       **
**NOM: Bogdan Laurentiu Cucura                            DATA:          **
**************************************************************************/

//****************************INCLUDE**************************************



//****************************VARIABLE*************************************



//****************************SETUP****************************************

void setup()                
{
  Serial.begin(9600);       
}

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
Serial.print("Hello world!");
delay(1000);
}

//****************************FUNCIONS*************************************
