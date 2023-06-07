// wap in c++ to define default arguments
// wap to set default values of name rollno and marks and school of a student and change them
// value of  sname and display,value odf rollnum and display,dont change anything and display
// change everything and display
#include <iostream>
using namespace std;
void student(char name[5] = "rabin", int rollnum = 28, float marks = 34.5)
{
    cout << "The obtained informations are:" << endl
         << "\nstudent name=" << name << endl
         << "\nRoll number=" << rollnum << endl
         << "\nMarks=" << marks << endl;
}
int main()
{
    system("cls");
    student();
    system("pause");
    student("abc");
    system("pause");
    student("rabin",27);
    system("pause");
    student("sabin",44,55);
    return 0;

}