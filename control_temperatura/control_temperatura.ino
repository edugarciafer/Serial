/**********************************************************************************
**                                                                               **
**                           CONTROL DE TEMPERATURA                              **
**                                                                               **
** EDUARD GARCIA                                                      6/03/2017  **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
  int tempAigua = 110;
//*********************************** SETUP ***************************************
void setup() // it runs only one time, when the program starts
{
  Serial.begin (9600); // set up Serial library at 9600 bps
  if (tempAigua<90)
  {
    Serial.print ("Aigua encara no bull");
  }
  else if (tempAigua>=90,tempAigua<100)
  {
    Serial.print ("Aigua a punt de bullir");
  }
  else if (tempAigua==100)
  {
    Serial.print ("Aigua a 100ºC");
  }
  else if (tempAigua>100)
  {
    Serial.print ("Aigua bullint!");
  }
}

//************************************ LOOP ***************************************
void loop() // there's nothing here because wwe want to do it only one time
{
}

//*********************************** FUNCIONS ************************************
