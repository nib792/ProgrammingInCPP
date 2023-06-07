//swapping using the functions using call by reference and and call by value
#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;
    cout<<"THe values of a and b before switching are  "<<endl<<"a="<<x<<endl<<"b="<<y<<endl;
    swap(&x,&y);
cout<<"The values after switching are"<<endl;
cout<<"The value of a is "<<x<<endl<<"The value of b is "<<y<<endl;
    return 0;
}