#include <iostream>
using namespace std;
class base
{
public:
    int a = 69;
    virtual void show() = 0;
    int getA()
    {
        return a;
    }
};
class derived : public base
{
public:
    int b;
    derived(int k)
    {
        b = k;
    }
    void show()
    {
        cout << "The value of teh derived class is : " << b;
    }
};
int main(void)
{
    derived b(420);
    b.show();
    return 0;
}