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
    Serial.print ("Aigua encara no bull"); // if tempAigua<90 then print the text in quotation marks
  }
  else if (tempAigua>=90,tempAigua<100)
  {
    Serial.print ("Aigua a punt de bullir"); // if tempAigua is between 90 and 100 then print the text in quotation marks
  }
  else if (tempAigua==100)
  {
    Serial.print ("Aigua a 100ºC"); // if tempAigua=100 then print the text in quotation marks
  }
  else if (tempAigua>100)
  {
    Serial.print ("Aigua bullint!"); // if tempAigua is over 100 then print the text in quotation marks
  }
}

//************************************ LOOP ***************************************
void loop() // there's nothing here because wwe want to do it only one time
{
}

//*********************************** FUNCIONS ************************************
