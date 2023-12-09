#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{

    try
    {
        char c;
        cout << "Enter a character: ";
        cin >> c;

        if (isdigit(c))
        {
            int x = c;
            throw int(x);
        }

        if (isalpha(c))
            throw(c);
        return 0;
    }
    catch (int x)
    {
        cout << "Caught exception : int type ";
    }
    catch (char c)
    {
        cout << "Caught exception : char type ";
    }
}