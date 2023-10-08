#include <iostream>
using namespace std;

class logic
{
    int a;

public:
    logic(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The number is :- " << a << endl;
    }
    logic operator|(logic x)
    {
        a = this->a | x.a;
    }
};

int main(void)
{
    logic x(3), y(0);
    x.display();
    y.display();
    x = (x | y);
    x.display();
    y.display();

    return 0;
}