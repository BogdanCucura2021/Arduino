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
float a = 3;
float b = 2;
float d;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
  Serial.begin(9600);
  Serial.println("Here is division: ");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
  
  Serial.print("a / b = ");
  Serial.println(d);
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  
}

//****************************FUNCIONS*************************************
