#include <iostream>
using namespace std;

class weather_report
{
    string day_of_month;
    int hightemp;
    int lowtemp;
    int amount_rain;
    int amount_snow;

public:
    weather_report()
    {
        day_of_month = "Sunday";
        hightemp = 69;
        lowtemp = 30;
        amount_rain = 5;
        amount_snow = 1;
    }

    void getval()
    {

        cout << "Enter the day:- " << endl;
        cin >> day_of_month;

        cout << "Enter the high temp:- " << endl;
        cin >> hightemp;

        cout << "Enter the low temp:- " << endl;
        cin >> lowtemp;

        cout << "Enter the amount of rain:- " << endl;
        cin >> amount_rain;

        cout << "Enter the amount of snow:- " << endl;
        cin >> amount_snow;
    }
    void showval()
    {
        cout << "The day is:- " << day_of_month << endl;

        cout << "The high temp is:- " << hightemp << endl;

        cout << "The low temp is:-  " << lowtemp << endl;

        cout << "The amount of rain is:- " << amount_rain << endl;

        cout << "The amount of snow is:- " << amount_snow << endl;
    }
};

// weather_report::

int main(void)
{
    weather_report r1;
    r1.getval();

    r1.showval();

    return 0;
}