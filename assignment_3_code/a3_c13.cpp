#include <iostream>
using namespace std;

class dist
{
    int feet, inches;

public:
    dist(int a, int b)
    {
        feet = a;
        inches = b;
    }
    void display()
    {
        cout << " FEET " << feet << " INCHES " << inches << endl;
    }

    dist operator+=(dist d1)
    {
        feet += d1.feet;
        inches += d1.inches;
    }
};

int main(void)
{
    dist a(5, 11), b(0, 1);
    a.display();
    b += a;
    b.display();
    return 0;
}