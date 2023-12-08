#include <iostream>
using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;

    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }

    employee(){};
};

class programmer : public employee
{
public:
    int languageCode = 9;
    programmer(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    void getData()
    {
        cout << id;
    }
};

int main(void)
{
    employee kshitij(1);
    programmer harry(200);
    cout << "The salary of the employee kshitij is " << kshitij.salary << endl;
    cout << "The salary of the employee harry is " << harry.salary << endl;
    cout << "the language code for the employee harry is :- " << harry.languageCode << endl;
    harry.getData();
    return 0;
}