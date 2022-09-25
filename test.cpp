// The purpose of the file is to test our Circle class
// We will need some #includes for our code to work.  These are like import statements.

#include "Circle.h" // Can't create a Circle object unless we know the specification
#include <iostream> // For cout, endl
#include <vector> // Demonstrate a dynamic array data structure

using namespace std; // For cout, endl, and vector

// All C++ programs have a main function.

int main() 
{
    // Create 5 circles each with a different name and radius.  "f" means floating point.
    Circle c1(10.0f, "Circle A"); 
    Circle c2(20.0f, "Circle B");
    Circle c3(5.5f, "Circle C");
    Circle c4(100.0f, "Circle D");
    Circle c5(1.0f, "Circle E");

    // Lets call some functions on c1 first.  Object.Function
    c1.display();
    float area = c1.getArea();
    float circum = c1.getCircumfrence();
    cout << "area = " << area << " circum = " << circum << endl;

    // Lets grow the circle by 50%
    c1.changeRadius(0.5f);
    c1.display();

    // Lets shrink it by 10%
    c1.changeRadius(-0.1f);
    c1.display();

    // Lets put all the circles into a dynamic array (Python list).  In C++
    // we call it a vector.  When we create data structures in C++, we use something called
    // a template.  This means we have to say what data type is in the data structure.  In
    // this case, the vector will contain Circle objects.
    vector<Circle> circles;

    // The push_back function will append the value to the end of the dynamic array.
    circles.push_back(c1);
    circles.push_back(c2);
    circles.push_back(c3);
    circles.push_back(c4);
    circles.push_back(c5);

    // Now lets loop through the circles and display them.
    // We will loop the integer i from 0 to 1 less than the size of the vector (which is currently 5)
    for (int i=0; i<circles.size(); i++) 
    {
        // We can index the vector using []'s
        // Then we can call display on it.
        circles[i].display();
    }

    return 0; // Main must return an integer ... 0 usually means the program worked.
}