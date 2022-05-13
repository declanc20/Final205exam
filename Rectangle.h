///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final205test - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include"Shape.h"


class Rectangle : public Shape{

protected:  ///////////////////////// Member Variables /////////////////////////
   double lentgh;
    double width;

public:   /////////////////////// Constructors ////////////////////////////////
    /// Create a Mammal with the *minimum* required fields
    Rectangle(double newLength,double newWidth) ;

public:  ////////////////////////// Getters public
    double getLentgh() const;
    double getWidth() const;


private: ///setters private
    void setLentgh(double lentgh);
    void setWidth(double width);

};



