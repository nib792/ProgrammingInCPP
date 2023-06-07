#include<iostream>
using namespace std;
int main(){
    int a,b,quo,rem;
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    quo=a/b;
    if(a>b){
        rem=a%b;
            cout<<"\n""The remainder is "<<rem<<endl;

    }else{
        cout<<"Remainder is not exactly zero"<<endl;
    }
    cout<<"The quotient is "<<quo<<endl;
    return 0;

}
