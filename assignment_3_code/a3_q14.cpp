
#include <iostream>
using namespace std;

class str
{
    string a;

public:
    str(string x = "")
    {
        a = x;
    }

    void display()
    {
        cout << a;
    }

    string operator+(str s1)
    {
        a = a + s1.a;
    }
};

int main(void)
{

    str s1(" hello "), s2(" world "), s3;
    s1.display();
    s2.display();

    s1 + s2;

    s2.display();

    return 0;
}