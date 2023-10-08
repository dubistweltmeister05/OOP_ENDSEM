#include <iostream>
using namespace std;

class ex
{
    int num1;
    int num2;

public:
    ex(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    static void add(ex n1, ex n2);
};

void ex ::add(ex n1, ex n2)
{
    cout << "The sum of all numbers is :- " << (n1.num1 + n1.num2 + n2.num1 + n2.num2) << endl;
}

int main(void)
{
    ex x1(6, 9);
    ex w2(3, 4);

    ex::add(x1, w2);

    return 0;
}