#include <iostream>
#include <conio.h>
using namespace std;

class error
{
public:
    int a;
    error(int x)
    {
        a = x;
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
        throw error(69);
    }
    catch (error e)
    {
        cout << "Caught the error\n";
        e.display();
    }

    return 0;
}