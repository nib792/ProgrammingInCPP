// WAP in c++ to make function callled maximum taht prints the max among 3 numbers using the c
// the concept of inline functons
#include<iostream>
using namespace std;
class largest
{
private:
    int n1, n2, n3;

public:
    void getD()
    {
        cout << "Enter the values of n1,n2,n3" << endl;
        cin >> n1 >> n2 >> n3;
        cout << "The values of n1,n2 and n3 resp are:" << n1 << endl
             << n2 << endl
             << n3 << endl;
    }
     void maximum();
     //inline              inline
};
inline void largest :: maximum()
{
    if (n1 > n2 && n1 > n3)
    {
        cout << "The largest among them is " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "The largest among them is " << n2 << endl;
    }
    else
    {
        cout << "The largest among them is " << n3 << endl;
    }
}
int main()
{
    system("cls");
    largest L;
    L.getD();
    L.maximum();
    return 0;
}
