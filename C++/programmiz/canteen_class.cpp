// WP in c++ to declare a class called canteen and write the data members for the class along with functions call //
#include <iostream>
using namespace std;
class canteen
{
private:
    int staffs;
    float salary;
    char name[10], address[10];

public:
       
    void getInfo()
    {
 cout << "Enter the informations of a canteen like name address staffs and the salary of the staffs in order" << endl;
        cout << "Name=" << endl;
        cin >> name;
        cout << "address=" << endl;
        cin >> address;
        cout << "number of staffs =" << endl;
        cin >> staffs;
        cout << "basic average salary=" << endl;
        cin >> salary;
    }
    void displayInfo()
    {
        cout << "The required informations of the canteen are" << endl;
        cout << "Name =" << name << endl
             << "Address=" << address << endl
             << "number of staffs =" << staffs << endl
             << "basic average salary=" << salary << endl;
    }
};
int main()
{
    canteen c[4];
    for (int i = 1; i <= 3; i++)
    {
        c[i].getInfo();
    }
    for (int i = 1; i <= 3; i++)
    {
        c[i].displayInfo();
    }
    return 0;
}