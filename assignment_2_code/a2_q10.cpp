/*A constant is a value or variable that does not change during the execution of a program.It can be declared using the keyword const in C++.For example, const int PI = 3.14; declares a constant integer named PI with the value 3.141.

A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. For example, int sum (int x, int y, int z = 0) declares a function named sum with three parameters, where the third parameter has a default value of 0. If the function is called with only two arguments, such as sum (10, 20), then the third argument will take the default value of 02.

A constant argument is an argument that is passed to a function with the keyword const, which means that the function cannot modify its value. This is useful to prevent accidental changes to the original data and to improve performance by avoiding unnecessary copies. For example, int sum (const int x, const int y) declares a function named sum with two constant arguments, which means that the function cannot change the values of x and y inside its body3.

Here is an example of how to use default and constant arguments in C++:*/

#include <iostream>
using namespace std;

// function to calculate the area of a circle
// takes one constant argument (radius) and one default argument (pi)
double area(const double r, double pi = 3.14)
{
    return pi * r * r; // returns the product of pi and square of radius
}

int main()
{
    double radius = 5;                                                                                           // declare a variable for radius
    cout << "Area of circle with radius " << radius << " is " << area(radius) << endl;                           // call area function with one argument
    cout << "Area of circle with radius " << radius << " and pi = 3.14159 is " << area(radius, 3.14159) << endl; // call area function with two arguments
    return 0;
}