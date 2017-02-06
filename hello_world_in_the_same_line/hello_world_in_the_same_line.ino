/**********************************************************************************
**                                                                               **
**                             HELLO WORLD! AMB INTERVAL                         **
**                          D'UN SEGON A LA MATEIXA LÍNIA                        **
** EDUARD GARCIA                                                    30/01/2017   **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************

//*********************************** SETUP ***************************************
void setup() //only runs one time, when the program starts
{ Serial.begin(9600);    // set up Serial library at 9600 bps

}

//************************************ LOOP ***************************************
void loop() //   it runs repeatedly in a loop
{Serial.print("Hello world!");  // prints Hello world! at SerialMonitor in the same line of text
  delay(1000);      // with a delay of 1 second between every printing

}

//*********************************** FUNCIONS ************************************
