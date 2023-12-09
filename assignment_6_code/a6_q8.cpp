#include <iostream>
using namespace std;

int main(void)
{

    int a = 10, b = 0, res;

    try
    {
        // if a is divided by b(which has a value 0);
        if (b == 0)
            throw(res);
        else
            res = a / b;
    }
    catch (int res) // catch block to handle/catch exception
    {
        cout << "Caught exception : int type ";
    }

    return 0;
}