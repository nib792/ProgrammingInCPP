//Wap in c+_+ to swap two numbers//
#include<iostream>
using namespace std;
int main()
{
int n1,n2,temp;
cout<<"Enter the values of n1 and n2"<<endl;
cin>>n1>>n2;
cout<<"The values  of n1 and n2 before swapping are:"<<endl<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
temp=n1;
n1=n2;
n2=temp;
cout<<"The values of n1 and n2 after switching are :"<<endl<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
return 0;

}