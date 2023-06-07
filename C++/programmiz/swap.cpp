#include<iostream>
using namespace std;
int main(){
    //program to swap any two numbers
    int a=5,b=10,temp;
    cout<<"BEfore swapping"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping is "<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;

}