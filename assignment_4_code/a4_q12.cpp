#include <iostream>
using namespace std;

class a
{
public:
    int a = 69;
    void show()
    {
        cout << a << endl;
    }
};

class b : virtual public a
{
};

class c : public virtual a
{
};
class d : public b, public c
{
};

int main(void)
{
    d obj;
    obj.show();
    return 0;
}