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
#include"assert.h"
#include<stdexcept>

Rectangle::Rectangle(double newLength,double newWidth){ //constructor to populate
    Rectangle::length = newLength;
    Rectangle::width = newWidth;
}




double Rectangle::getLentgh() const {
    return length;
}

void Rectangle::setLentgh(double lentgh) {
    if (length <= 0 ){
        throw std::invalid_argument("length and width must be > 0");
    }
    Rectangle::length = lentgh;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    if (width <= 0 ){
        throw std::invalid_argument("length and width must be > 0");
    }
    Rectangle::width = width;
}
