/**********************************************************************************
**                                                                               **
**                             HELLO WORLD! AMB INTERVAL                         **
**                                   D'UN SEGON                                  **
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
{Serial.println("Hello world!");  // prints Hello world! at SerialMonitor in a new line
  delay(1000);      // with a delay of 1 second between every printing

}

//*********************************** FUNCIONS ************************************
