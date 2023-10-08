#include <iostream>
using namespace std;

class and1
{
    int a;

public:
    void display()
    {
        cout << a;
    }
    and1(int x)
    {
        a = x;
    }
    and1 operator&(and1 a1)
    {
        a = a & a1.a;
    }
};

int main(void)
{
    and1 x(9);
    // x.display();
    and1 y = x.operator&(x);
    y.display();
    return 0;
}