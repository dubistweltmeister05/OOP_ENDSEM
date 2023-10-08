#include <iostream>
using namespace std;

class Distance
{
private:
    int km, m, cm; // data members in kilometers, meters, and centimeters
public:
    // default constructor
    Distance()
    {
        km = 0;
        m = 0;
        cm = 0;
    }
    // parameterized constructor
    Distance(int k, int m, int c)
    {
        km = k;
        m = m;
        cm = c;
    }
    // function to display distance
    void display()
    {
        cout << km << " km " << m << " m " << cm << " cm" << endl;
    }
    // friend function to overload + operator
    friend Distance operator+(Distance d1, Distance d2);
    // member function to overload - operator
    Distance operator-(Distance d2);
};

// definition of friend function to overload + operator
Distance operator+(Distance d1, Distance d2)
{
    Distance temp;                             // temporary object to store the result
    temp.cm = d1.cm + d2.cm;                   // add centimeters
    temp.m = d1.m + d2.m + (temp.cm / 100);    // add meters and carry over from centimeters
    temp.cm = temp.cm % 100;                   // adjust centimeters
    temp.km = d1.km + d2.km + (temp.m / 1000); // add kilometers and carry over from meters
    temp.m = temp.m % 1000;                    // adjust meters
    return temp;                               // return the result
}

// definition of member function to overload - operator
Distance Distance::operator-(Distance d2)
{
    Distance temp;        // temporary object to store the result
    temp.cm = cm - d2.cm; // subtract centimeters
    temp.m = m - d2.m;    // subtract meters
    temp.km = km - d2.km; // subtract kilometers
    if (temp.cm < 0)
    {                   // if centimeters are negative
        temp.cm += 100; // adjust centimeters
        temp.m--;       // borrow from meters
    }
    if (temp.m < 0)
    {                   // if meters are negative
        temp.m += 1000; // adjust meters
        temp.km--;      // borrow from kilometers
    }
    return temp; // return the result
}

int main()
{
    Distance d1(5, 300, 50); // create a distance object using parameterized constructor
    Distance d2(3, 250, 75); // create another distance object using parameterized constructor
    Distance d3;             // create a distance object using default constructor

    cout << "Distance 1: ";
    d1.display(); // display distance 1

    cout << "Distance 2: ";
    d2.display(); // display distance 2

    d3 = d1 + d2; // add distance 1 and distance 2 using overloaded + operator

    cout << "Distance 1 + Distance 2: ";
    d3.display(); // display the result of addition

    d3 = d1 - d2; // subtract distance 2 from distance 1 using overloaded - operator

    cout << "Distance 1 - Distance 2: ";
    d3.display(); // display the result of subtraction
}