// waP  in c++ to input number from users and display them whether they are odd or even
#include<iostream>
using namespace std;
class o_Echeck
{
private:
    int num;

public:
    void getandCalculate();
    /* {
         cout << "Enter the value of numbers" << endl;
         cin >> num;
         if (num % 2 == 0)
         {
             cout << "the entered number " << num << "is an even number" << endl;
         }
         else
         {
             cout << "the entered number " << num << "is an odd number" << endl;
         }
         */

};

// defining outside class
// so to define a function outside of a class the syntax is void class name :: declared function
void o_Echeck :: getandCalculate()
{
    cout << "Enter the value of numbers" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "the entered number " << num << "is an even number" << endl;
    }
    else
    {
        cout << "the entered number " << num << "is an odd number" << endl;
    }
}
int main()
{
    system("cls");
    o_Echeck E;
    E.getandCalculate();
    return 0;
}