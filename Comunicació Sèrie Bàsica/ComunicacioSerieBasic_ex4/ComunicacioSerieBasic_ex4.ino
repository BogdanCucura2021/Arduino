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



//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600);
Serial.println("Escull el numero de l'operacio que vols realitzar?");
delay(500);
Serial.println(" 1.Comprovar numero de tarjeta de credit");
delay(500);
Serial.println(" 2.Comprovar numero de compte bancari");
delay(250);
Serial.println(" 3.Buscar un digit perdut de tarjeta de credit");
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 

}

//****************************FUNCIONS*************************************
