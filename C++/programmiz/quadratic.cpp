#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,r1,r2,rp,ip;
    cout<<"Enter the value so f a b and c"<<endl;
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d==0){
        cout<<"Roots are real "<<endl;
        r1=-b/2*a;
        r2=r1;
        cout<<"r1="<<r1<<endl<<"r2="<<r2<<endl;

    }
    else if(d>0){
        cout<<"roots aree real but unequal "<<endl;
        r1=(-b+sqrt(d)/2*a;
        r2=(-b-sqrt(d)/2*a;
        cout<<"The roots are r1="<<r1<<endl<<"and r2="<<r2<<endl;
    }
    else{
        cout<<"The roots are unequal and imagianary";
        rp=-b/2*a;
        ip=sqrt(-d)/2*a;
        cout<<"The imagianry roots obtained are in th form of "<<endl;
        cout<<rp<<"+"<<ip<<endl;
        cout<<rp<<"-"<<ip<<endl;
    }
}