#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of anay number"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"Entered number is an even number";
    }else{
        cout<<"Entered number is an odd number";
    }
    return 0;
}