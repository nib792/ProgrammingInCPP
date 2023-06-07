// wap in c++  to define static data members and member functions
//also use the concept of reference variables
#include <iostream>
using namespace std;
class Example
{
private:
    static const char cname[10];
    static int cnum;
    int rollnum;

public:
    void getD()
    {
        cout << "Enter your rollnumber" << endl;
        cin >> rollnum;
        cout << "\nRollnumber=" << rollnum << endl;
    }
    static void display();
};
const char Example ::cname[10] = "COSMOS";
int Example ::cnum = {202};

void Example ::display()
{
    cout << " \nThe informations obtained are:"
         << "College name=" << cname << endl
         << "Class room number =" << cnum << endl;
}
int main()
{
    system("cls");
    int a=4;
    int &b=a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<b<<endl;
    Example E;
    E.getD();
    // E.display();
    Example ::display();
    return 0;
}
