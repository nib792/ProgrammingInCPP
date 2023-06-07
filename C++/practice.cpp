// wap in c++ to ask the users for integers until he/she presses an odd number
#include <iostream>
using namespace std;
class bibek
{
private:
    int num;

public:
    void getandCalculate()
    {
        cout << "Enter the value of number " << endl;
        cin >> num;
        if (num % 2 == 0)
        {
            cout<<"asking recurssively until we get the odd number"<<endl;
            while (num % 2 == 0)
            {
                cin >> num;
                if(num%2!=0){
                    cout<<"Enetered number is an odd number"<<endl;
                }
            }
        }
        else
        {
            cout << "The entered number is odd" << num;
        }
    }
};
int main()
{
    system("cls");
    bibek bro;
    bro.getandCalculate();
    return 0;

}
