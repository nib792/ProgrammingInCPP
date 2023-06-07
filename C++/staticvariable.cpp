#include <iostream>
using namespace std;
class Employee
{
private:
    char name[10];
    int eId;
    float initialSalary, totalSalary;
    static const char cName[];
    static const float IncreasedSalary;
    void getDisplay()
    {
        cout << "Enter the name employee id and the initial salary of employee" << endl;
        cin >> name >> eId >> initialSalary;
        totalSalary = initialSalary + IncreasedSalary;
        cout << "Name =" << name << endl
             << "eId=" << eId << endl
             << "initial salary=" << initialSalary << endl
             << "Company name=" << cName << endl
             << "And the total salary of the employee=" << totalSalary << endl;
    };
    const char Employee :: cName = "coreQ";
    const float Employee :: IncreasedSalary = {1000000};
    int main()
    {
        Employee E;
        E.getDisplay();
        return 0;
    }
