#include <iostream>
using namespace std;
int main()
{
    cout << "This is tutorial 9"<<endl;
    //;et us ;learn about the if else statements//
    int age;
    cout << "Enter your age";
   // cout << "Enter your age";
    cin >> age;
   /* if ((age < 18) && (age>0))
    {
        cout << "you are under age";
    }
    else if (age == 18)
    {
        cout << "youe are just a teenager";
    }
    else if(age<1){
        cout<<"You are not even born till bty now";
    }
    else
    {
        cout << "You meet our age criteria";
    }
*/

//switch case statements//
switch (age)
{
case 18:
cout<<"You are underage undder our age evaluation";
    /* code */
    break;

    case 2:
cout<<"You are just 2 years";
    /* code */
    break;

    case 29:
cout<<"You can come to the party";
    /* code */
    break;





default:
  cout<<"No such ages being categorized";
    break;
}


    return 0;
}