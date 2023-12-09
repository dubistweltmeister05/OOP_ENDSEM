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
    string status;

    void accept()
    {
        cout << "Enter the issued book number " << endl;
        cin >> book_number;
        cout << "Enter the status of the issuance" << endl;
        cin >> status;
    }

    void display()
    {
    student:
        getData();
        cout << "The issued book Number is :- " << book_number << endl;
        cout << "The status of the book is :- " << status << endl;
    }
};

int main(void)
{
    library l("Kshitij", 123, "EnTC", 10000);
    l.accept();
    l.display();

    return 0;
}