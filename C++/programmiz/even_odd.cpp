// wap in c++ to evaluate if the entered integers are odd or even using concept of class and object in c++//
#include <iostream>
using namespace std;
class numCheck
{
private:
    int num, check;

public:
    void getInfo()
    {
        cout << "Enter the value of number to be checked " << endl;
        cin >> num;
        check = num % 2;
    }
    void displayInfo()
    {
        if (check == 0)
        {
            cout << "Entered number is even" << endl;
        }
        else
        {
            cout << "Entered number is odd" << endl;
        }
    }
};
int main(){
    numCheck N;
    N.getInfo();
    N.displayInfo();
    return 0;
}