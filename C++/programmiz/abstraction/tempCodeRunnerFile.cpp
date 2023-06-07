#include <bits/stdc++.h>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
// first sub class inheriting from the base class vehicle
class landTransport : public vehicle
{
public:
    landTransport()
    {
        cout << "Vehicle is a land transportation means" << endl;
    }
};
class car : public landTransport
{
public:
    car()
    {
        cout << "Car by itself is a vehicle and a means of land transportation" << endl;
    }
};
int main()
{
    // creating an object of the child class will invoke the properties of constructor base class
    car obj;
    return 0;
}
