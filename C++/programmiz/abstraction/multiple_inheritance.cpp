#include <bits/stdc++.h>
using namespace std;
// base class 1
class vehicle
{
    // constructor base class creation
public:
    vehicle()
    {
        cout << "This is a vehicle " << endl;
    }
};
// base class 2
class fourWheeler
{
public:
    // second base constructor and the fourwheeler type specifications is not done because type specification of constructor base is invald
    fourWheeler()
    {
        cout << "This is a fourwheeler" << endl;
    }
};
class car : public vehicle, public fourWheeler
{
    // now creating an object of a child class which is a car will invoke the properties of parent classes or base classes
};
int main()
{
    car obj;
    return 0;
};
