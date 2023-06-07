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
class car : public vehicle
{
    // subclass car inheriting from base class under the public mode
};
int main()
{
    // now creating an object  of the child class will invoke the constructor of the base class
     system("cls");
    car object;

    return 0;
}