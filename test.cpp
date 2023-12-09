#include <iostream>
using namespace std;

class base
{
private:
    int a;

public:
    base(int a)
    {
        this->a = a;
    }
    base() {}
    void setData(int x) { a = x; }
    int getData() { return a; }
    void show()
    {
        cout << a << endl;
    }
};

int main(void)
{
    base b1(69), b2(420);
    base *ptr1, *ptr2;
    ptr1 = &b1;
    ptr2 = &b2;
    ptr1->show();
    ptr2->show();

    base temp;
    temp.setData(ptr1->getData());

    ptr1->setData(ptr2->getData());
    ptr2->setData(temp.getData());

    ptr1->show();
    ptr2->show();
    return 0;
}