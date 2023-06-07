#include<iostream>
using namespace std;
int main(){
    int num,i,count=0;
    cout<<"Enter any number";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout>>"Entered number is a prime"<<endl;
    }else{
        cout>>"Enterednumber is not a prinme"<<endl;
    }
  return 0;
}
