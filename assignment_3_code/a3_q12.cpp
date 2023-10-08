#include <iostream>
using namespace std;

class time
{
    int minutes, hours;

public:
    time(int a = 0, int b = 0)
    {
        minutes = a;
        hours = b;
    }
    void display()
    {
        cout << "The time is :- " << hours << " hours " << minutes << " minutes " << endl;
    }

    time operator+(time o1)
    {
        minutes = this->minutes + o1.minutes;
        hours = this->hours + o1.hours;
    }
};

int main(void)
{
    time o1(10, 2), o2(30, 1), o3;
    o1.display();
    o2.display();
    o3 = o1 + o2;
    o3.display();
    return 0;
}