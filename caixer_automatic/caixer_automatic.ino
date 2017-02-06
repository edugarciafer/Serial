
/**********************************************************************************
**                                                                               **
**                          PROGRAMA CAIXER AUTOMÀTIC                            **
**                                                                               **
** EDUARD GARCIA                                                   6/02/2017     **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************

//*********************************** SETUP ***************************************
void setup()       // run only one time, everytime the program starts
{Serial.begin(9600); // start serial comunication al 9600 bps
Serial.println("Escull el número de l'operació que vols realitzar?"); // print the text in quotation marks and break the line.
Serial.println ("1.Comprovar número de targeta de crèdit"); // print the text in quotation marks and break the line.
Serial.println("2.Comprovar número de compte bancari"); // print the text in quotation marks and break the line.
Serial.println("3.Buscar un dígit perdut de targeta de crèdit"); // print the text in quotation marks and break the line.

}

//************************************ LOOP ***************************************
void loop() // there's nothing here because we want to print the text only one time, when we turn on the device. 
{
}

//*********************************** FUNCIONS ************************************
