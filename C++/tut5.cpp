#include <iostream>
using namespace std;
// use of basic input and outputs in c++//
int main()
{
    int num1, num2;
    //<< this operator is called insertion operator//
    cout << "Enter the values of num1:\n";
    cin >> num1;
    //>> This operator is the extraction operator which extracts the data//

    cout << "Enter the values of num2:\n";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    cout << "\nThe difference is " << num1 - num2;
    cout << "\nThe product is " << num1 * num2;
   /* if (num1 % num2 == 0)
    {
        cout << "\nTHe divided value is " << num1 / num2;
        else
        {
            cout << "The numers are not exactly divsible";
        }

*/
        return 0;
    }