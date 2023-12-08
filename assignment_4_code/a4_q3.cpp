#include <iostream>
using namespace std;

class account
{
protected:
    string name;
    int balance = 0;
    int number;
    float interest;
    string type;

public:
    account(string acc_name, int acc_number, string acc_type)
    {
        name = acc_name;
        number = acc_number;
        type = acc_type;
    }
    account(){};

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void display()
    {
        interest = balance * 0.06;
        cout << "The balance is :- " << balance << endl;

        cout << "The interest earned is :- " << interest << endl;
    }
};

class current_account : public account
{
public:
    current_account(string acc_name, int acc_number, string acc_type)
    {
        name = acc_name;
        number = acc_number;
        type = acc_type;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }
    void display()
    {
        interest = balance * 0.06;
        cout << "The balance is :- " << balance << endl;

        cout << "The interest earned is :- " << interest << endl;
    }
};

class savings_account : public account
{
public:
    savings_account(string acc_name, int acc_number, string acc_type)
    {
        name = acc_name;
        number = acc_number;
        type = acc_type;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }
    void display()
    {
        interest = balance * 0.06;
        cout << "The balance is :- " << balance << endl;

        cout << "The interest earned is :- " << interest << endl;
    }
};

int main(void)
{
    account a1("Kshitij", 123, "Private");
    current_account a2("Shilpa", 456, "Current");
    savings_account a3("Neeraj", 789, "Savings");

    a1.deposit(1000);
    a2.deposit(2000);
    a3.deposit(3000);

    a1.display();
    a2.display();
    a3.display();

    return 0;
}