/**************************************************************************
**                                                                       **
**                                                                       **
**                                TÍTOL: Per sabr-ne més                 **
**                                                                       **
**                                                                       **
**                                                                       **
**                                                                       **
**NOM: Bogdan Laurentiu Cucura                            DATA:29/11/2021**
**************************************************************************/

//****************************INCLUDE**************************************



//****************************VARIABLE*************************************
boolean A, B, C, Output;


//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
  Serial.begin(9600);

  Serial.println("Taula de la Veritat");

  Serial.println("  A  B  C  | Output");
  Serial.println("___________|_______");

  A=0; B=0; C=0;
  Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  0  0  0  | ");
  Serial.println(Output);
  A=0; B=0; C=1;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  0  0  1  | ");
  Serial.println(Output);

    A=0; B=1; C=0;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  0  1  0  | ");
  Serial.println(Output);

     A=0; B=1; C=1;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  0  1  1  | ");
  Serial.println(Output);

      A=1; B=0; C=0;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  1  0  0  | ");
  Serial.println(Output);

        A=1; B=0; C=1;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  1  0  1  | ");
  Serial.println(Output);

          A=1; B=1; C=0;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  1  1  0  | ");
  Serial.println(Output);

            A=1; B=1; C=1;
    Output = (~A & B & C) | (A & ~B & C) | (A & B & ~C) | (A & B & C);
  Serial.print("  1  1  1  | ");
  Serial.println(Output);
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
  
}

//****************************FUNCIONS*************************************
