/**********************************************************************************
**                                                                               **
**                         NOMBRES EN DIFERENT FORMAT                            **
**                                                                               **
** EDUARD GARCIA                                                     5/03/2017   **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
  int num = 64;
//*********************************** SETUP ***************************************
void setup() // it runs only one time, when the program starts
{
  Serial.begin (9600); // set up serial library at 9600 bps
  Serial.println ("Diferents formats for the same number:"); // print the text in quotation marks and breake the line
  Serial.write (num); // Write binary data to the serial port
  Serial.println (); //
  Serial.println (num); // print the value of num, and breake the line
  Serial.print ("DEC="); // print the text in quotation marks
  Serial.println (num,DEC); // print the value of num in decimal, and breake the line
  Serial.print ("BIN="); // print the text in quotation marks
  Serial.println (num,BIN); // print the value of num in binary, and breake the line
  Serial.print ("HEX="); // print the text in quotation marks
  Serial.println (num,HEX); // print the value of num in hexadecimal, and breake the line
  Serial.print ("OCT="); // print the text in quotation marks
  Serial.println (num,OCT); // print the value of num in octal, and breake the line
}

//************************************ LOOP ***************************************
void loop() // there's nothing here because we want to do it only one time
{
}

//*********************************** FUNCIONS ************************************
