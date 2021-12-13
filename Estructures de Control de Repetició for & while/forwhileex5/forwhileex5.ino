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

int taula = 1;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 

} 
//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
   Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
   taula = taula + 1;
  Serial.println(taula); 
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);   
  }

}

//****************************FUNCIONS*************************************
