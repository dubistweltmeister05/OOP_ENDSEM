/*
The constructor of a multiple inherited class is called in the order of it's inheritance
*/

#include <iostream>
using namespace std;

class a1
{
public:
    int a = 1;
    a1()
    {
        cout << "constructor of a1" << endl
             << a << endl;
    }
};

class a2
{
public:
    int b = 2;
    a2()
    {
        cout << "Constructor of a2" << endl
             << b << endl;
    }
};

class a3 : public a2, public a1
{
public:
    int c = 3;
    a3() : a2(),a1()
    {
        cout << "Constructor of a3" << endl
             << c << endl;
    }
};
int main(void)
{
    a3 x;
    return 0;
}