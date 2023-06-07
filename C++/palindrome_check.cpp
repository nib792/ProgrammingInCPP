#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0,n;
    cout<<"Ente the value of the number which is to be checked for the palinderome "<<endl;
    cin>>num;
    n=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(n==rev){
        cout<<"Enterd number is a palindrome"<<endl;
    }
    else{
        cout<<"enered number nort a palindrome";
    }
    return 0;

}