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

const byte a = 5;
const byte b = 6;
const byte c = 7;
const byte d = 8;
const byte e = 9;
const byte f = 10;
const byte g = 11;
//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
pinMode (a, OUTPUT);
pinMode (b, OUTPUT);
pinMode (c, OUTPUT);
pinMode (d, OUTPUT);
pinMode (e, OUTPUT);
pinMode (f, OUTPUT);
pinMode (g, OUTPUT);
} 

//****************************LOOP*****************************************
void loop() {                 //configura el bucle 
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, LOW);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW); 

delay(500);

digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW); 

delay(500);

digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, LOW);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW); 

delay(500);

digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW); 

delay(500);

digitalWrite (a, LOW); 
digitalWrite (b, LOW);
digitalWrite (c, LOW);
digitalWrite (d, LOW);
digitalWrite (e, HIGH);
digitalWrite (f, LOW);
digitalWrite (g, HIGH); 

delay(500);

digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(500);





}

//****************************FUNCIONS*************************************
