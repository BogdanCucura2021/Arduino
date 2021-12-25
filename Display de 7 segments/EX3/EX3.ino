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
const byte p = 2;
byte button = 0; 
int temps = 1000;
int A = 1;
//****************************SETUP****************************************

void setup() {                 //configura el final de salida 
pinMode (a, OUTPUT);
pinMode (b, OUTPUT);
pinMode (c, OUTPUT);
pinMode (d, OUTPUT);
pinMode (e, OUTPUT);
pinMode (f, OUTPUT);
pinMode (g, OUTPUT);
pinMode (p, INPUT); 
} 

//****************************LOOP*****************************************
void loop() {   
button = digitalRead (p);


if ( button == 0 )
{
  A = 0;
  A = A - 1;  
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW); 

delay(temps);

}
else if ( A == -1)
{
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW); 

delay(temps); 
A = A - 1;
}
if ( A == -2)
{ 
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, LOW);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, LOW);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
else if ( A == -3)
{
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
if ( A == -4)
{
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
else if ( A == -5)
{
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
if ( A == -6)
{
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
else if ( A == -7)
{
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW); 

delay(temps);
A = A - 1;
}
if ( A == -8)
{
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
else if ( A == -9)
{
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH); 

delay(temps);
A = A - 1;
}
}




//****************************FUNCIONS*************************************
