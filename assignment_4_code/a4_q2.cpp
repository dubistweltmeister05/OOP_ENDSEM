#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    int b;

    void setData(int y, int x)
    {
        a = x;
        b = y;
    }

    base(int y, int x)
    {
        a = x;
        b = y;
    }
    base(){};

    void getData()
    {
        cout << "the data in a and b is" << endl
             << a << endl
             << b << endl;
    }
};

class derived1 : public base
{
public:
    int c;
    void set_no(int q, int r, int s)
    {
        a = q;
        b = r;
        c = s;
    }
    void display()
    {
        cout << "The value held is a is :-" << a << endl;
        cout << "The value held is b is :-" << b << endl;
        cout << "The value held is c is :-" << c << endl;
    }
};

class derived2 : private base
{
public:
    int c;
    void set_nos(int u, int v, int w)
    {
        a = u;
        b = v;
        c = w;
    }
    void display()
    {
        cout << "The value held is a is :-" << a << endl;
        cout << "The value held is b is :-" << b << endl;
        cout << "The value held is c is :-" << c << endl;
    }
};
int main(void)
{
    base a;
    // a.setData(2, 3);
    // a.getData();
    derived1 b;
    b.set_no(1, 2, 3);
    b.display();
    derived2 c;
    c.set_nos(1, 2, 3);
    c.display();
    return 0;
    // cout << b.b;

    // derived1 d1;
    // d1.setData(1, 2);
    // d1.set_no(3);
    // d1.display();
    // return 0;
}