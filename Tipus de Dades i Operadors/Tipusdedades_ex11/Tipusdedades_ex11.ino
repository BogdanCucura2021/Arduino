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
long drive_kb;
long real_drive_mb;
long real_drive_kb;

//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600); 
Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println(" large.");
Serial.print("In theory, it can store ");
 
drive_mb = drive_gb;
drive_mb = drive_mb * 1024;

Serial.print(drive_mb);
Serial.print("Megabytes, ");

drive_kb = drive_mb * 1024;

Serial.print(drive_kb);
Serial.println(" Kilobytes.");
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  
}

//****************************FUNCIONS*************************************
