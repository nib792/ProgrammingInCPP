// wap in c++ to caluclate the profit of 3 employees .create a separate class for each
/* employee and create necessary member functions to getname,designation,address and salary
pm and expensespm and also display the above information*/
#include <iostream>
using namespace std;
class E3;
class E2;
class E1
{
private:
    char name[10], designation[10], address[10];
    float salarypm, exppm, profit;

public:
    void getandCalculate()
    {
        cout << "Enter the informations like name designation address and salary and expenses per month of employee 1 " << endl;
        cin >> name >> designation >> address >> salarypm >> exppm;
        profit = salarypm - exppm;
    }
    friend void gain(E1 obj1, E2 obj2, E3 obj3);
};
class E2
{
private:
    char name[10], designation[10], address[10];
    float salarypm, exppm, profit;

public:
    void getandCalculate()
    {
        cout << "Enter the informations like name designation address and salary and expenses per month of employee 2" << endl;
        cin >> name >> designation >> address >> salarypm >> exppm;
        profit = salarypm - exppm;
    }
    friend void gain(E1 obj1, E2 obj2, E3 obj3);
};
class E3
{
private:
    char name[10], designation[10], address[10];
    float salarypm, exppm, profit;

public:
    void getandCalculate()
    {
        cout << "Enter the informations like name designation address and salary and expenses per month of employee 3 " << endl;
        cin >> name >> designation >> address >> salarypm >> exppm;
        profit = salarypm - exppm;
    }
    friend void gain(E1 obj1, E2 obj2, E3 obj3);
};
void gain(E1 obj1, E2 obj2, E3 obj3)
{
    int total;
    total = obj1.profit + obj2.profit + obj3.profit;
    cout<<"The total profit obtained is  "<<total<<endl;
}
int main()
{
    system("cls");
    E1 e1;
    E2 e2;
    E3 e3;
    e1.getandCalculate();
    e2.getandCalculate();
    e3.getandCalculate();
    gain(e1,e2,e3);
    return 0;

}
