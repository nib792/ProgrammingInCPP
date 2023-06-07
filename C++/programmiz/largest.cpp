#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the values of a b and c"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"Largest ="<<a<<endl;
    }
    else if(b>c&&b>a){
        cout<<"Largest ="<<b<<endl;
    }
    else{
        cout<<"Largest among the three is "<<c<<endl;
    }
return 0;
}