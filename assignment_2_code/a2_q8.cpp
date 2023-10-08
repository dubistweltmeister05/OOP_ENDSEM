#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

int main(void)
{
    int a = 3;
    int b = 4;
    cout << "a" << a << "b" << b << endl;
    swap(&a, &b);
    cout << "a" << a << "b" << b << endl;
    return 0;
}