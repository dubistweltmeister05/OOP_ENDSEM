#include <iostream>
using namespace std;

class oo
{
    int num1;
    int num2;

public:
    oo(int a = 0, int b = 0)
    {
        num1 = a;
        num2 = b;
    }

    friend oo operator|(oo o1, oo o2);
};

oo operator|(oo o1, oo o2)
{
    oo num3((o1.num1 | o2.num1), (o1.num2 | o2.num2));
    cout << num3.num1 << " " << num3.num2 << endl;
}

int main(void)
{
    oo x1(6, 9), x2(3, 4);
    oo x3;
    x3 = x1 | x2;
    return 0;
}