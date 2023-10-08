/*
A constructor is a special function within a class that has the same name as that of the class.
It is used to initialize the class variables. It has many types like default, parameterized, overloaded,
inline etc. for example -
*/
#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void print_no()
    {
        cout << "The point is at :- (" << a << "," << b << ")" << endl;
    }
};

int main(void)
{
    point a(5, 9);
    a.print_no();

    return 0;
}