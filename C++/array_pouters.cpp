#include<iostream>
using namespace std;
int main(){
   /* int marks[4]={1,2,3,4};
    cout<<"The obtained marks are"<<endl;
    for(int i=1;i<=4;i++){
        cout<<"marks [i[="<<marks[i]<<endl;
    }
    //the values of an array can also be changed
    //array examople
    //array examople
*/
//use of lopop for the declaration initialization and function of an array//
/*for (int i = 0; i < 4; i++)
{
    cout<<<<"The valuee of "<<<i<<<"is"<<marks[i]<<endl;
}
*/
//pointer arithmetics ion c++
int marks[4]={1,2,3,4};
int* p= marks;
cout<<":THe valueof marks [0} is "<<*p<<endl;
cout<<":THe valueof marks [1} is "<<*p+1<<endl;
cout<<":THe valueof marks [2} is "<<*p+2<<endl;
cout<<":THe valueof marks [3} is "<<*p+3<<endl;

 
    return 0;
}