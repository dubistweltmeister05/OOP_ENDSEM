#include <iostream>
using namespace std;

class complex
{
    int real, fake;

public:
    complex(int a, int b)
    {
        real = a;
        fake = b;
    }
    void display()
    {
        cout << "The number is " << real << "+" << fake << "i" << endl;
    }

    void operator>(complex &c1)
    {
        if ((real > c1.real) && (fake > c1.fake))
        {
            cout << "Greater" << endl;
        }
        else
        {
            cout << "Lesser " << endl;
        }
    }
};

int main(void)
{
    complex c1(6, 9), c2(3, 4);
    c1.display();
    c2.display();
    c1 > c2;
    return 0;
}