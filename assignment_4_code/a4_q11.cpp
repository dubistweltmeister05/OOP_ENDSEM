#include <iostream>
using namespace std;

class a1
{
public:
    int a;
    a1(int x)
    {
        a = x;
        cout << "The constructor for the base class a1 " << a << endl;
    }
};

class a2
{
public:
    int b;
    a2(int q)
    {
        b = q;
        cout << "The constructor for the base class a2 " << b << endl;
    }
};

class a3 : public a1, public a2
{
public:
    int c;
    a3(int x, int q, int w) : a1(x), a2(q)
    {
        c = w;
        cout << "The constructor for the derived class a3 " << endl
             << a << endl
             << b << endl
             << c << endl;
    }
};
int main(void)
{
    a3 m(69, 420, 21);
    return 0;
}