#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    student(int r)
    {
        roll_no = r;
    }
    student() {}
    void SetNumber(int r)
    {
        roll_no = r;
    };

    void getNumber()
    {
        cout << "The rollnumber of the student is :- " << roll_no << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    exam(float a, float b) : student()
    {
        maths = a;
        physics = b;
    }
    exam() {}
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void GetMarks()
    {
        cout << "The marks scored by the student in maths and physics are:- " << maths << endl
             << physics << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display()
    {
        percentage = (maths + physics) / 2;
        getNumber();
        GetMarks();
        cout << "The percentage marks scored by the student are:- " << percentage << endl;
    }
};

int main(void)
{
    result kshitij;
    kshitij.SetNumber(420);
    kshitij.set_marks(90, 94);
    kshitij.display();
    return 0;
}