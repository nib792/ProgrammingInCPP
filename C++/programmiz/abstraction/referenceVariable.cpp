//reference varaiables in c++ are the variables that are gives a nickname to any of the declared variable
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a=4;
    int &b=a;
    float c=5.645;
    float &d=c;
    cout<<"value of a is "<<a<<endl;
    cout<<"value  of b is "<<a<<endl;
      cout<<"value  of c is "<<c<<endl;
        cout<<"value  of d is "<<c<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of c is "<<&c<<endl;
    return 0;
}