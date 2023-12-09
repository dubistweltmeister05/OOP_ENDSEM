#include <iostream>
using namespace std;
class base
{
public:
    int a = 1;
    void display()
    {
        cout << "This is the value of the base class " << a;
    }
};

class derived : public base
{
public:
    int b = 2;
    void display()
    {
        cout << "This is the value of the derived class " << b;
    }
};
int main(void)
{
    base *ptr;
    base b;
    derived d;
    // derived *ptr_d;
    // ptr_d = &b;
    // ptr_d->display();
    ptr = &d;
    ptr->display();
    return 0;
}