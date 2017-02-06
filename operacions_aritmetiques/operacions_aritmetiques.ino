/**********************************************************************************
**                                                                               **
**                          OPERACIONS ARITMÈTIQUES                              **
**                                                                               **
** EDUARD GARCIA                                                       6/02/2017 **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
 int a = 5;
 int b = 10;
 int c = 20;
//*********************************** SETUP ***************************************
void setup()//run only one time, when the program starts
{
  Serial.begin(9600); //start serial comunication at 9600 bps
  Serial.println("Here is some math:"); // print the text in quotation marks and break the line.
  Serial.print("a+b="); //print the text in quotation marks.
  Serial.println(a + b); //print the addition in brackets, and break the line.
  Serial.print("b-a="); //print the text in quotation marks.
  Serial.println(b - a); //print the subtraction in brackets, and break the line.
  Serial.print("a*c="); // print the text in quotation marks.
  Serial.println(a*c); // print the multiplication in brackets, and break the line.
  Serial.print("c/a="); // print the text in quotation marks.
  Serial.println(c/a); // print the divide in brackets, and break the line.
  
}

//************************************ LOOP ***************************************
void loop()// there's nothing here because we want to print it only one time.
{
}

//*********************************** FUNCIONS ************************************
