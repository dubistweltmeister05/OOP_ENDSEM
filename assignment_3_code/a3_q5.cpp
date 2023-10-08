#include <iostream>
using namespace std;

class complex
{
    int real, fake;

public:
    void display()
    {
        cout << "the complex number is :-" << real << "+" << fake << "i" << endl;
    }
    complex(int r = 0, int i = 0)
    {
        real = r;
        fake = i;
    }

    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.fake = c1.fake + c2.fake;
}

int main(void)
{
    complex c1(6, 9), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}