/**********************************************************************************
**                                                                               **
**                            CHARACTER MAPS                                     **
**                                                                               **
** EDUARD GARCIA                                                    6/03/2017    **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
int thisByte = 33;
//*********************************** SETUP ***************************************
void setup() // it runs only one time, when the program starts
{
  Serial.begin (9600); // set up Serial library at 9600 bps
  Serial.println ("ASCII table ~ Character map"); // print the text in quotation marks and breake the line
}

//************************************ LOOP ***************************************
void loop() // it runs repeatedly 
{
  Serial.write (thisByte); // write the value of thisByte on serial port
  Serial.print (", dec:"); // print the text in quotation marks
  Serial.print (thisByte); // print the value of thisByte
  Serial.print (", hex:"); // print the text in quotation marks
  Serial.print (thisByte,HEX); // print the value of thisByte in hexadecimal
  Serial.print (", oct:"); // print the text in quotation marks
  Serial.print (thisByte,OCT); // print the value of thisByte in octal
  Serial.print (", bin:"); // print the text in quotation marks
  Serial.println (thisByte,BIN); // print the value of thisByte in binary

  if (thisByte==126) // if printed last visible character
  {
    while (true)
    {
    }  
  }
  thisByte++; // go on to the next character
}

//*********************************** FUNCIONS ************************************
