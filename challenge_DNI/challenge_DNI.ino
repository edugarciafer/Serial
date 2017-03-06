/**********************************************************************************
**                                                                               **
**                                 PLANTILLA                                     **
**                                                                               **
** EDUARD GARCIA I ALBERT SEGUÏ                                      6/03/2017   **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
  long DNI=12121212;
  int a;
//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin (9600);
  Serial.write (a=DNI%23);
  if (a==1)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("R");
  }
  if (a==10)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("X");
  }
  if (a==0)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("T");
  }
  if (a==21)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("K");
  }
    
   if (a==2)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("W");
  } 
   
   if (a==3)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("A");
  }  
   if (a==4)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("G");
  }
    
   if (a==5)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("M");
  }
  if (a==6)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("Y");
  }
  if (a==7)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("F");
  }
 if (a==8)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("P");
  }
 if (a==9)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("D");
  }
   if (a==11)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("B");
  }
   if (a==12)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("N");
  }
   if (a==13)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("J");
  }
   if (a==14)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("Z");
  }
   if (a==15)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("S");
  }
   if (a==16)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("Q");
  }
   if (a==17)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("V");
  }
   if (a==18)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("H");
  }
   if (a==19)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("L");
  }
   if (a==20)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("C");
  }
   if (a==22)
  {
    Serial.print (DNI);
    Serial.print ("-");
    Serial.print ("E");
  }
}

//************************************ LOOP ***************************************
void loop()
{
}

//*********************************** FUNCIONS ************************************
