#include <iostream>
using namespace std;

class base
{
public:
    int a;
    base(int a)
    {
        this->a = a;
    };
    void show()
    {
        cout << "The value of the base class is " << a << endl;
    }
};

int main(void)
{
    base b(69);
    b.show();
    return 0;
}