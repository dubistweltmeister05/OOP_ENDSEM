#include <iostream>
using namespace std;
class base
{
private:
    int a;

public:
    void setVal(int x)
    {
        a = x;
    }
    int getVal()
    {
        return a;
    }
    void show()
    {
        cout << "This is the calue held " << a << endl;
    }
};
int main(void)
{
    base b1, b2;

    b1.setVal(6);
    b2.setVal(9);
    cout << "The value before swap" << endl;
    b1.show();
    b2.show();

    base *ptr1, *ptr2;
    ptr1 = &b1;
    ptr2 = &b2;

    int temp = (ptr2)->getVal();
    ptr2->setVal(ptr1->getVal());
    ptr1->setVal(temp);
    cout << "The value after swap" << endl;
    b1.show();
    b2.show();

    return 0;
}