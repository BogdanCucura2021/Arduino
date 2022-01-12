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

const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;  

//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
  pinMode(xiulet, OUTPUT); 
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
    valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(xiulet, 800, valPot0);    // xiulet de durada valPot0
  delay(2*valPot0);     
}

//****************************FUNCIONS*************************************
