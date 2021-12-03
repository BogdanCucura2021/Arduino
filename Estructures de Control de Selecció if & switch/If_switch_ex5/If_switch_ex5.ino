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

float Carboni = 16;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
Serial.begin(9600); 

} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  if ( Carboni < 3.5)
  {
    Serial.println("A");
    delay(1000); 
  }
 else if ( Carboni <= 6.5 && Carboni > 3.5)
  {
    Serial.println("B");
    delay(1000); 
  }
    else if ( Carboni <= 11.1 && Carboni > 6.5)
    {
    Serial.println("C");
    delay(1000);
    }
      else if ( Carboni <= 17.7 && Carboni > 11.1)
      {
      Serial.println("D");
      delay(1000);
      }
        else if (Carboni <=38.2 && Carboni > 17.7)
        {
          Serial.println("E");
          delay(1000);
        }
          else if (Carboni <43.2 && Carboni > 38.2)
          {
            Serial.println("F");
            delay(1000); 
          }
          else
          {
            Serial.println("G");
            delay(1000);
          }
}

//****************************FUNCIONS*************************************
