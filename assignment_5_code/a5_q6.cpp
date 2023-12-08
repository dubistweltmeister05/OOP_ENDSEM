/*
I am guessing you lot know what a pointer is . If not, pakka fail ho yaar tum.
*/

#include <iostream>
using namespace std;
class base
{
public:
    int a = 69;
    void show()
    {
        cout << "The value of the base class is " << a;
    }
};
int main(void)
{
    base b;
    base *ptr;
    ptr = &b;
    ptr->show();

    return 0;
}