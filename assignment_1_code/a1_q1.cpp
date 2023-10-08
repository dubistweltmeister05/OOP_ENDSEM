/*
Abstraction is the process of displaying solely the informationrequited while hiding the part of infi that is not required
It only shows the necessary info to the users, simplifying the complexity of the code for the user.

eg -


#include <iostream>
using namespace std;

class Summation
{
private:
    // private variables
    int a, b, c;

public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << "Sum of the two number is : " << c << endl;
    }
};
int main()
{
    Summation s;
    s.sum(5, 4);
    return 0;
}
*/

/************************************************************************************************************/

/*
Data encapsulation is a process to contain information by hiding it into a single unit to porotect it from the outside world.
It results in data abstraction . For example - the use of private functions in a class -

#include <iostream>
using namespace std;

class EncapsulationExample
{
private:
    // we declare a as private to hide it from outside
    int a;

public:
    // set() function to set the value of a
    void set(int x)
    {
        a = x;
    }

    // get() function to return the value of a
    int get()
    {
        return a;
    }
};

// main function
int main()
{
    EncapsulationExample e1;

    e1.set(10);

    cout << e1.get();
    return 0;
}
*/