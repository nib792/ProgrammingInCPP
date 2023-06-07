#include<iostream>
using namespace std;
class maths
{
private:
int n1,n2,n3,sum,prod;
float avg;
public:
void getInfo()
{
    cout<<"Enter the values of n1,n2,n3 and do the mathematical calculations"<<endl;
    cin>>n1>>n2>>n3;
}
void addition(){
    sum=n1+n2+n3;
    
}
void product(){
    prod=n1*n2*n3;
}
void average(){
  //  avg=(n1+n2+n3)/3;
  avg=float(sum)/3;
}
void displayInfo(){
    cout<<"The obtained informations from the calculations are:"<<endl;
    cout<<"sum="<<sum<<endl<<"Product="<<prod<<endl<<"Average="<<avg<<endl;
}
};
int main(){
    maths M;
    M.getInfo();
    M.addition();
    M.product();
    M.average();
    M.displayInfo();
    return 0;
}   