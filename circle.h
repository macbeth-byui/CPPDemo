// This file provide the specification for the Circle Class
// If another cpp file wants to create or use a Circle object, then
// they will need to #include this file to know how to use the Circle


// The #ifndef, #define, and #endif (at the end of the file) are designed
// to prevent circular #include statements which would cause problems.  This
// is the normal convention for writing a class specification in C++
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream> // for string

using namespace std; // also for string ... the standard C++ namespace

#define PI 3.14159265359 // Useful way to define constants numerical values

class Circle 
{
    // Private data can't be accessed or modified directly outside
    // of the class.
    private:
        float radius;
        string name;  

    // Public functions can be executed from outside of the class
    // so long as we have an object.  Notice we are not providing implementations
    // of these functions here.  We could ... but it is generally common 
    // practice to do this in circle.cpp
    public:
        // The constructor defines how we create a Circle object
        // "const" means the function can't change the variable
        // & means that we want to pass by reference ... better for passing objects like strings
        // Constructors don't have a return type.
        // The underscores don't mean anything ... just using a different name from the member data.
        Circle(const float _radius, const string &_name); 

        // "const" here means that the function won't change the data in the object
        // The first two returns floats and the last returns nothing (hence the void)
        float getArea() const;
        float getCircumfrence() const;
        void display() const;

        // Here is a function to change the radius by some percent
        // Since this will change object, there is no "const".
        void changeRadius(float perecent);

};

#endif