// Copy constructor
#include <iostream>
#include <cmath>
using namespace std;
class f
{
    int n1, n2;

public:
    // Parametarized constructor
    f(int N1, int N2)
    {
        int n1 = N1;
        int n2 = N2;
        // cout << "The values are :" << n1 << n2 << endl;
    }
    // Copy constructor
    f(f &obj)
    {
        n1 = obj.n1;
        n2 = obj.n2;
        // cout << "It is the demo of copy constructor and the values are :" << n1 << " " << n2 << endl;
    }

    f()
    {
        n1 = 100;
        n2 = 50;
        // cout << "The values are :" << n1 << n2 << endl;
    }
    void display()
    {
        cout << "n1=" << n1 << "\tn2=" << n2 << endl;
    }
};
int main()
{
    // Parametarized constructor
    f f1(10, 5);
    f1.display();
    // copy constructor
    f f2(f1);
    f2.display();
    f f3;
    f3.display();
    f f4(f3);
    f4.display();

    return 0;
}