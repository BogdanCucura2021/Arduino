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

int tempAigua = 100;

//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600);

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
    else if (tempAigua >=90 && tempAigua < 100)
    {
      Serial.print("Aigua apunt de bullir");
    }
        else if (tempAigua = 100)
        {
          Serial.print ("Aigua a 100ºC");
        }
            else
              Serial.print ("Aigua bullint");

} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  
}

//****************************FUNCIONS*************************************
