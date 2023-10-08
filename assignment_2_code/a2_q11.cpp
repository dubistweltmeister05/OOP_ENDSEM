#include <iostream>
#include "math.h"
using namespace std;

double power(double n, int p = 2)
{
    return pow(n, p);
}

int main(void)
{
    double n;
    int p;
    cout << "enter the calue of n:- " << endl;
    cin >> n;

    cout << "enter the calue of p:- " << endl;
    cin >> p;

    cout << power(n, p);

    return 0;
}