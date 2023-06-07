#include<iostream>
using namespace std;
int sum(int a,int b);
void g();
   
int main()
{
    int num1,num2;
    cout<<"Enter the values of num1 and num2"<<endl;
    cin>>num1>>num2;
     sum(num1,num2);
    cout<<"The sum of nnumbers is "<<sum(num1,num2);
    g();
    return 0;
}
void g(){
    cout<<"\n Hello, Good Morning!"<<endl;
}
int sum(int a ,int b){
    int c=a+b;
    return c;
}