/**********************************************************************************
**                                                                               **
**                               CÀLCUL HIPOTENUSA                               **
**                                                                               **
** EDUARD GARCIA                                                     5/03/2017   **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
int a=3;
int b=4;
//*********************************** SETUP ***************************************
void setup() // it runs only one time, when the program starts
{Serial.begin(9600); // set up serial library at 9600 bps
Serial.println ("Lets calculate an hypoteneuse:");
Serial.print("a="); //print the text in quotation marks and break the line
Serial.println (a); // print the value of a
Serial.print("b="); //print the text in quotation marks and break the line
Serial.println (b); // print the value of b
Serial.print("h="); //print the text in quotation marks
Serial.print (sqrt(pow(3,2)+pow(4,2))); //print the result of the calculus
}

//************************************ LOOP ***************************************
void loop() //there's nothing here because we want to do it only one time.
{
}

//*********************************** FUNCIONS ************************************
