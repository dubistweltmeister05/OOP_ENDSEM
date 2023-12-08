#include <iostream>
using namespace std;

class base
{
public:
    int a = 69;
    void greet()
    {
        cout << "Hello " << a << endl;
    }
};

class derived : public base
{
public:
    int b = 420;
    void greet()
    {
        cout << "Hello " << b << endl;
    }
};
int main(void)
{
    base x;
    x.greet();

    derived y;
    y.greet();
    return 0;
}