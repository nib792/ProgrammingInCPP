#include<iostream>
using namespace std;
int main(){
    char op;
    cout<<" Choose th desired  operators from the given operators +,-,/,%,*"<<endl;
    cin>>op;
    int num1,num2;
    cout<<"Enter the teo required nubers"<<endl;
    cin>>num1>>num2;
    switch (op)
    {
    case '+':
      cout<<num1<<"+"<<num2<<'='<<num1+num2<<endl;
        break;
    case '-':
      cout<<num1<<"-"<<num2<<'='<<num1-num2<<endl;
        break;
    case '*':
      cout<<num1<<"*"<<num2<<'='<<num1*num2<<endl;
        break;
    case '/':
      cout<<num1<<"/"<<num2<<'='<<num1/num2<<endl;
        break;
    case '%':
      cout<<num1<<"%"<<num2<<'='<<num1%num2<<endl;
        break;    
    default:
    cout<<"Invalid operations being choosen"<<endl;
        break;
    }

}