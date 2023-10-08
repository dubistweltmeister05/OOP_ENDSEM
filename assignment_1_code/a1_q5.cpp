// #include <iostream>
// using namespace std;

// class distance
// {
//     int km;
//     int m;
//     int cm;

// public:
//     distance();

//     distance(int x, int y, int z);
// };

// distance::distance()
// {
//     km = 69;
//     m = 69;
//     cm = 69;
// }

// distance ::distance(int x, int y, int z)
// {
//     km = x;
//     m = y;
//     cm = z;
// }
// int main(void)
// {
//     distance d1();
//     return 0;
// }

#include <iostream>

class Distance
{
private:
    int kilometers;
    int meters;
    int centimeters;

public:
    // Default constructor
    Distance() : kilometers(0), meters(0), centimeters(0) {}

    // Parameterized constructor
    Distance(int km, int m, int cm) : kilometers(km), meters(m), centimeters(cm) {}

    // Method to display the distance
    void display()
    {
        std::cout << kilometers << " kilometers, " << meters << " meters, " << centimeters << " centimeters" << std::endl;
    }
};

int main()
{
    // Create a Distance object with the default values (0 kilometers, 0 meters, 0 centimeters)
    Distance defaultDistance;
    std::cout << "Default Distance: ";
    defaultDistance.display();

    // Create a Distance object with specific values
    Distance customDistance(2, 500, 25);
    std::cout << "Custom Distance: ";
    customDistance.display();

    return 0;
}
