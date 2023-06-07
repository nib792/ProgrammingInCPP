#include <iostream>
using namespace std;
class poly
{
public:
    void rabin(int x)
    {
        cout << "The value of x is  " << x << endl;
    }
    void rabin(double x)
    {
        cout << "The value of x is" << x << endl;
    }
    void rabin(int x, int y)
    {
        cout << "The value of x is " << x << endl
             << "and  the value of y obtained is " << y << endl;
    }
};
int main()
{
poly P;
P.rabin(3);
P.rabin(534.34);
P.rabin(5,6);
return 0;
}