#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 6, b = 9;
    swap(&a, &b);
    cout << a << b;
    return 0;
}