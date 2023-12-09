#include <iostream>
#include <conio.h>
using namespace std;

class error
{
public:
    int a;
    error(int a)
    {
        this->a = a;
    }
    error() {}
    void display()
    {
        cout << a;
    }
};

int main(void)
{
    error e;
    try
    {
        cout << "Press a key to test the exception" << endl;
        getch();
        throw error(99);
    }
    catch (error e)
    {
        cout << "Caught the error\n";
        e.display();
    }

    return 0;
}