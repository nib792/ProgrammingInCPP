#include <iostream>
using namespace std;
class student
{
private:
    char name[10], faculty[10];
    int roll_no;

public:
    void readData()
    {
        cout << "Enter the name faculty and the rollnumber of the students";
        cin >> name >> faculty >> roll_no;
    }
    void dispalyData()
    {
        cout << "name=" << name << endl
             << "faculty=" << faculty << endl
             << "Rollnum=" << roll_no << endl;
    }
};
int main()
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        s[i].readData();
        s[i].dispalyData();
    }
    return 0;
}
