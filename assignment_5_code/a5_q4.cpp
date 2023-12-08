/*
A class is said to be an abstract class in it has atleast 1 PURE VIRTUAL FUNCTION*/

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
int main(void)
{
    base b;
    return 0;
}