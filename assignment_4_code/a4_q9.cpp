#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    student(int s)
    {
        roll_no = s;
    }
    void getNumber()
    {
        cout << "The roll Number is :- " << roll_no << endl;
    }
};
class res : public student
{
public:
    float percent;

    res(int s, float q) : student(s)
    {
        percent = q;
    }
    void display()
    {
        this->getNumber();
        cout << "The percentage is :- " << percent;
    }
};

int main(void)
{
    res kshitij(69, 94.4);
    kshitij.display();
    return 0;
}