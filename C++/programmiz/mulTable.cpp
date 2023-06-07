#include<iostream>
using namespace std;
int main(){
    //program to pjrint the multiplication table of any of the desired number//
    int n;
    cout<<"ENter the value of n"<<endl;
    cin>>n;
    if(n==0){
        cout<<"multiplication of 0 with any other number is always zero "<<endl;
    }
    else{
        for(int i=1;i<=10;i++){
            cout<<n<<"*"<<i<<"="<<n*i<<endl;
        }
    }

    return 0;
}