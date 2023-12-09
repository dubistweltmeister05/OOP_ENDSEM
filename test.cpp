#include <iostream>
using namespace std;

class time
{
public:
    int hrs = 0;
    int mins = 0;
    int secs = 0;

    time(int a, int b, int c)
    {
        hrs = a;
        mins = b;
        secs = c;
    }
    time() {}

    void show()
    {
        cout << "THe time is " << hrs << " hours " << mins << " minutes " << secs << " Seconds " << endl;
    }

    time operator+(time &t1)
    {
        this->hrs += t1.hrs;
        this->mins += t1.mins;
        this->secs += t1.secs;
    }
};
int main(void)
{
    time t1(1, 2, 3), t2(4, 5, 6);

    t2 + t1;

    time t3 = t2;

    t3.show();

    return 0;
}