
/*
Static member functions in a class are the member functions declared with the keyword static.
THey are independent functions which can be called even if there is no object of that class available.
These fucntions are defined outside of the class, declared within the class and have access to the private members of the class.

USE SCOPE RESOLUTION TO DECLARE THESE MEMBERS/MEMBER FUNCTIONS

*/

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setVal()
    {
        cout << "Enter the employee id:- " << endl;
        cin >> id;
        count++;
    }
    void getVal()
    {
        cout << "The ID is :- " << id << endl;
    }
    static void getCount();
};

int employee ::count = 0;

void employee::getCount()
{
    cout << "The count is :- " << count << endl;
}

int main(void)
{
    employee e1, e2, e3;
    e1.setVal();
    e1.getVal();
    employee::getCount();

    e2.setVal();
    e2.getVal();
    employee::getCount();

    e3.setVal();
    e3.getVal();
    employee::getCount();

    return 0;
}