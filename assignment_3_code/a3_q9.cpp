#include <iostream>
using namespace std;

class counter
{
    int count;

public:
    counter(int a)
    {
        count = a;
    }
    void display()
    {
        cout << count << endl;
    }
    friend counter operator++(counter &c);
};

counter operator++(counter &c)
{
    c.count++;
}

int main(void)
{
    counter c(3);
    c.display();
    ++c;
    c.display();
    return 0;
}