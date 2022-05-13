///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final205test - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

double Rectangle::getLentgh() const {
    return lentgh;
}

void Rectangle::setLentgh(double lentgh) {
    Rectangle::lentgh = lentgh;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}
