#include <iostream>
using namespace std;

class a
{
public:
    int a = 69;
    void show()
    {
        cout << "This is the value held is class A " << endl
             << a;
    }
};

class b : public virtual a
{
};

class c : public virtual a
{
};

class d : public b, public c
{
};
int main(void)
{
    d obj;
    obj.show();
    return 0;
}

/*
The class A has just one data member a which is public.
This class is virtually inherited in class B and class C.
Now class B and class C use the virtual base class A and no duplication of data member a is done;
Classes B and C share a single copy of the members in the virtual base class A.
*/