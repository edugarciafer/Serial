/**********************************************************************************
**                                                                               **
**                            DIVISIÓ AMB DECIMALS                               **
**                                                                               **
** EDUARD GARCIA                                                      5/03/2017  **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
int a = 3.0 ;
int b = 2.0 ;
float c ;
//*********************************** SETUP ***************************************
void setup() // it runs only one time, when the program starts
{
  Serial.begin (9600); // set up serial library at 9600 bps
  Serial.println ("Here is a division:"); //print the text in quotations marks and breake the line
  Serial.print ("a="); // print the text inquotation marks
  Serial.println (a); // print the value of a, and breake the line
  Serial.print ("b="); // print the text in quotation marks
  Serial.println (b); // print the value of b, and breake the line
  c = (float) a/b ; // do the division
  Serial.print ("c="); // print the text in quotation marks
  Serial.print (c); // print the result of the division
}

//************************************ LOOP ***************************************
void loop() // there's nothing here because we want to do it only one time
{
}

//*********************************** FUNCIONS ************************************
