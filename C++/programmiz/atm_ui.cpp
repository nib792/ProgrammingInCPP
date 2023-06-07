#include<iostream>
using namespace std;
void menu()
{
float balance=1000,amount;
int op;
do{
      cout <<endl<< "Menu" << endl;
        cout << "1.Check Balance" << endl;
        cout << "2.Withdraw Money" << endl;
        cout << "3.Deposit Money" << endl;
        cout << "4.To Exit" << endl;
        cout << "Enter the option:";
        cin>>op;
        system("cls");
        switch(op)
        {
        cout << "Sorry, not enough money" << endl;
            break;case 1:
            cout << "The balance that you have in your account is:Rs" << balance << endl;
            break;

        case 2:
            cout << "Enter the amount:";
            cin >> amount;

            if (amount < balance)
            {
                cout << "Rs" << amount << " is successfully withdrawl" << endl;
                balance -= amount;
                break;
            }

            else

        case 3:
            cout << "Enter the amount of money to be deposited:";
            cin >> amount;
            balance += amount;
            break;

        default:
        cout<<"Invalid option"<<endl;
        
        }
}
}