// This file contains all the implementations of functions
// inside of the Circle class.  We have to #include the circle.h file
// so that the compiler knows what a "Circle" is.  #include's of header
// files that we create are specified using double quotations.  #include's
// of libraries are specified using <>'s.

#include "circle.h"
#include <iostream> // for cout, endl, and string

using namespace std; // also for cout, endl, and string

// We have to specify that these functions are part of the Circle class.  If 
// we don't, then the compiler won't let us access the member data (radius and name)
// We do this by putting the name of the class with two ::'s after it.  These are
// the real names of these functions.

Circle::Circle(const float _radius, const string &_name) 
{
    // Set the member data with the values provided from the user
    radius = _radius;
    name = _name;
}

float Circle::getArea() const
{
    // Calculate the area ... PI was defined in circle.h
    return PI * radius * radius;
}

float Circle::getCircumfrence() const
{
    // Calculate the circumfrence ... 2.0f means 2 is floating point.
    return 2.0f * PI * radius;
}

void Circle::display() const
{
    // Display the circle.  We combine the text and variable values
    // using <<'s ... we call these output stream operators.  The
    // last "endl" add a new line.
    cout << "Circle " << name << " has raidus " << radius << endl;
}

void Circle::changeRadius(float percent)
{
    // Change the radius based on the percent
    // If the percent is negative, it will cause it to go down
    radius += (radius * percent);
}
