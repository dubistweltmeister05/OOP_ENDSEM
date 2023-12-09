#include <iostream>
using namespace std;

class base
{
public:
    int a = 69;
    virtual void show() = 0;
};
class derived : public base
{
public:
    int b = 420;
    void show()
    {
        cout << "This is the value of the derived class " << endl
             << b << endl;
    }
};
int main(void)
{
    base *ptr;
    // base b;
    derived d;
    ptr = &d;
    ptr->show();
    return 0;
}