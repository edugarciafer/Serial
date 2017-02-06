/**********************************************************************************
**                                                                               **
**                           PROGRAMA HELLO WORLD!!                              **
**                                                                               **
** EDUARD GARCIA                                                    30/01/2017   **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************

//*********************************** SETUP ***************************************
void setup()              //run only one time, every time the program starts
{ Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Hello world!"); // prints "Hello world!" in a new line at SerialMonitor
}



//************************************ LOOP ***************************************
void loop()   //there's nothing in this part, because we want to print it only once, when the program starts.
{
}

//*********************************** FUNCIONS ************************************
