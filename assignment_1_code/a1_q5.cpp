#include <iostream>
using namespace std;

class distance
{
    int km;
    int m;
    int cm;

public:
    distance();

    distance(int x, int y, int z);
};

distance::distance()
{
    km = 69;
    m = 69;
    cm = 69;
}

distance ::distance(int x, int y, int z)
{
    km = x;
    m = y;
    cm = z;
}
int main(void)
{
    return 0;
}


