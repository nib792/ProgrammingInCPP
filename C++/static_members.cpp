// WAP in c++ to input and display the info of students with static data members college name
// classroom number and number of subjects
#include <iostream>
using namespace std;
class student
{
private:
    static const char cname[10];
    static int cnumber;
   int rollnum;

public:
    void getD()
    {
        cout << "Enter your rollnumber" << endl;
        cin>>rollnum;
        cout << " \nThe informations obtained are:"
             << "College name=" << cname << endl
             << "Class room number =" << cnumber << endl
             << "Rollnumber=" << rollnum << endl;
    }
    };
    const char student ::cname[10] = "COSMOS";
    int student::cnumber = {202};
    int main()
    {
        system("cls");
        student S;
        S.getD();
        return 0;
    }
