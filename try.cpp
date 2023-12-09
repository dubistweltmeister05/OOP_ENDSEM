#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int imag;
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex(){};
    void display()
    {
        cout << "The number is " << real << " +" << imag << "i" << endl;
    }
    complex operator+=(complex &c1)
    {
        this->real += c1.real;
        this->imag += c1.imag;
    }
};

int main(void)
{
    complex c1(6, 9), c2(9, 6);
    c1.display();
    c2 += (c1);
    c2.display();
    return 0;
}