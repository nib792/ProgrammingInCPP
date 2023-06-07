#include<iostream>
using  namespace std;
int main(){
    int n1,n2,hcf;
    cout<<"Enter the values of n1 and n2";
    cin>>n1>>n2;
     //swap th values of n1 and n2
    if(n2>n1){
        int temp=n2;
        n2=n1;
        n1=temp;
    }
    for(int i=0;i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    cout<<"The hcf is "<<hcf<<endl;
return 0;


}