#include <iostream>
using namespace std;

class dist
{
    int km, m, cm;

public:
    dist(int a = 0, int b = 0, int c = 0)
    {
        km = a;
        m = b;
        cm = c;
    }
    void display()
    {
        cout << km << endl
             << m << endl
             << cm << endl;
    }
    dist operator-(dist d1)
    {
    }
    friend dist operator+(dist d1, dist d2);
};

dist operator+(dist d1, dist d2)
{
    dist temp;
    temp.km = d1.km + d2.km;
    temp.m = d1.m + d2.m;
    temp.cm = d1.cm + d2.cm;
    return temp;
}

int main(void)
{
    dist d1(1, 2, 3), d2(4, 5, 6), d3;
    d1.display();
    d2.display();
    d3 = d1 + d2;
    d3.display();

    return 0;
}