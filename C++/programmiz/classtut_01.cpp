/* WAP in c++ to find the addition subtraction and divide and remainder of the given two numbers usind class and objects concepts*/
#include <iostream>
using namespace std;
class maths
{
private:
    int n1, n2, sum, sub, div;
    int rem;

public:
    void getInfo()
    {
        cout << "Enter the values of n1 and n2" << endl;
        cin >> n1 >> n2;
        sum = n1 + n2;

        if (n1 > n2)
        {
            cout << " For the value of n1  greater than n2 ,the following mathematical calucalations obtained will be in positive" << endl;
            sub = n1 - n2;
            div = n1 / n2;
            rem = n1 % n2;
        }
        else
        {
            cout << " For the value of n2  greater than n1,  the following mathematical calucalations obtained are:" << endl;
            sub = n2 - n1;
            div = n2 / n1;
            rem = n2 % n1;
        }
    }
    void dispalyInfo()
    {
        cout << "The obtained values after certain mathematical calucalations are:" << endl
             << "Addition=" << sum << endl
             << "Subtraction=" << sub << endl
             << "Divsision=" << div << endl
             << "Remainder=" << rem << endl;
    }
};
int main(){
    maths m1;
    m1.getInfo();
    m1.dispalyInfo();
    return 0;
}
