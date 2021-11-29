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
int drive_gb = 100;
long drive_mb;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600);

Serial.print("Your HD is");
Serial.print(drive_gb);
Serial.println("GB Large");

drive_mb = 1024 * drive_gb;

Serial.print("It can store ");
Serial.print(drive_mb);
Serial.println(" Meagabytes!");
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  
}

//****************************FUNCIONS*************************************
