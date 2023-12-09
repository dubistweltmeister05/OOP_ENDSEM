#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (isalpha(c))
    {
        cout << c << " is a letter." << endl;
    }
    else if (isdigit(c))
    {
        cout << c << " is a digit." << endl;
    }
    else
    {
        cout << c << " is neither a letter nor a digit." << endl;
    }
    return 0;
}
