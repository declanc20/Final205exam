///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final205test - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include"Rectangle.h"

class Square: public Rectangle {

public:
    Square(double newSide): Rectangle( newSide, newSide){

}

public:
    double getSide();

};



