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

float Carboni = 6.5;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600); 

} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  if ( Carboni < 3.5)
  {
    Serial.println("Rang-A");
    delay(1000); 
  }
 else if ( Carboni < 6.5 && Carboni >= 3.5)
  {
    Serial.println("Rang-B");
    delay(1000); 
  }
    else if ( Carboni < 11.1 && Carboni >= 6.5)
    {
    Serial.println("Rang-C");
    delay(1000);
    }
    else if ( Carboni < 17.7 && Carboni >= 11.1)
    {
    Serial.println("Rang-D");
    delay(1000);
    }
    else if (Carboni <38.2 && Carboni >= 17.7)
    {
    Serial.println("Rang-E");
    delay(1000);
    }
    else if (Carboni <43.2 && Carboni >= 38.2)
    {
    Serial.println("Rang-F");
    delay(1000); 
    }
    else
    {
    Serial.println("Rang-G");
    delay(1000);
    }
}

//****************************FUNCIONS*************************************
