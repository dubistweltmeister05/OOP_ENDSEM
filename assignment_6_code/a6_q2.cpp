#include <iostream>
using namespace std;

int main(void)
{
    int x = -1;
    cout << "Pre try block\n";
    try
    {
        cout << "Inside the try block\n";
        if (x < 0)
        {
            throw x;
        }
    }
    catch (int x)
    {
        cout << "Exception caught \n";
    }

    cout << "After the catch\n";
    return 0;
}