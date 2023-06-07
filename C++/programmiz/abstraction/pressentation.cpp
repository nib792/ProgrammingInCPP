#include<iostream>
using namespace std;
class employee{
    private:

    static int salary;
    static  char cName[10],address[10];
    int salaryPrev,salaryTot;
    int eId;
    char name;
    public:
    void getDisplay(){
        cout<<"Enter the employee id ,name, and previous salary of the employee"<<endl;
    
    }
};
