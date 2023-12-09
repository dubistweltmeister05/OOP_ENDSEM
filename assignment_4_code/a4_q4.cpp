#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int prn;
    string department;
    int salary;

public:
    student(string _name, int _prn, string _dept, int _salary)
    {
        name = _name;
        prn = _prn;
        department = _dept;
        salary = _salary;
    };
    student(){};
    void setData()
    {
        cin >> name >> prn >> department >> salary;
    }

    void getData()
    {
        cout << name << endl
             << prn << endl
             << department << endl
             << salary << endl;
    }
};

class library : public student
{
public:
    library(string _name, int _prn, string _dept, int _salary) : student(_name, _prn, _dept, _salary){

                                                                 };

    int book_number;

    void accept()
    {
        cout << "Enter the issued book number " << endl;
        cin >> book_number;
    }

    void display()
    {
    student:
        getData();
        cout << "The issued book Number is :- " << book_number;
    }
};

int main(void)
{
    library l("Kshitij", 123, "EnTC", 10000);
    l.accept();
    l.display();
 
    return 0;
}