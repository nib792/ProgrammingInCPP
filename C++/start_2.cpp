// Wap in c++ to input 3 numbers and print their sum product and difference using class concepts
#include<iostream>
using namespace std;
class maths
{
private:
    int num1, num2, num3;

public:
    void getD()
    {
        cout << "Enter the required informataions like numbers values" << endl;
        cin >> num1 >> num2 >> num3;
        cout << "\n The numbers are ::"
             << "\num1=" << num1 << "\n Num2=" << num2 << "\n Num3=" << num3;
    }
    void calculate()
    {
        int sum = num1 + num2 + num3;
        cout << "The sum is " << sum << endl;
        int product = num1 * num2 * num3;
        cout << "The required product is " << product << endl;

        if (num1 > num2 && num1 > num3)
        {
            cout << "The difference is " << num1 - num2 - num3;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << "The difference is " << num2 - num1 - num3;
        }
        else
        {
            cout << "The difference is (if num3 is largest) num3 - num2 - num1" << num3 - num2 - num1;
        }
    }
};
int main()
{
    system("cls");
    maths M;
    M.getD();
    M.calculate();
    return 0;
}
