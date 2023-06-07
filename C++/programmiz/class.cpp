#include <iostream>
using namespace std;
class student
{
private:
    char name[10], address[10], faculty[10];
    int roll_no;
    float marks;

public:
    void getInfo()
    {
        cout << "Enter the name,address,faculty rollno and marks of the students" << endl;
        cin >> name >> address >> faculty >> roll_no >> marks;
    }
    void displayInfo()
    {
        cout << "Name=" << name << endl
             << " Address=" << address << endl
             << "faculty=" << faculty << endl
             << "Roll_number=" << roll_no << endl
             << "Marks" << marks << endl;
    }
};
int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].getInfo();
        s[i].displayInfo();
    }
    return 0;
}