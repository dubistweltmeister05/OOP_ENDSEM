#include <iostream>
using namespace std;

void zeroSmaller(int *a, int *b)
{
    if (*a < *b)
    {
        *a = 0;
    }
    else
    {
        *b = 0;
    }
}

int main(void)
{
    int a, b;
    a = 6;
    b = 9;
    cout << "a: " << a << " b: " << b << endl;
    zeroSmaller(&a, &b);
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}