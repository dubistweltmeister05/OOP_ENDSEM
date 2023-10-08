#include <iostream>
using namespace std;

class complex
{
    int real;
    int fake;

public:
    complex(int a, int b)
    {
        real = a;
        fake = b;
    }

    friend void add(complex c1, complex c2);
};

void add(complex c1, complex c2)
{
    cout << "The sum of the two numbers is:- " << (c1.real + c2.real) << "+" << (c1.fake + c2.fake) << "i" << endl;
}
int main(void)
{
    complex x1(6, 9);
    complex x2(3, 4);
    add(x1, x2);
    return 0;
}