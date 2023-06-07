#include<iostream>
using namespace std;
int main(){
//if else to assign gracdes a,b and c considering the grades
float marks;
cout<<"Enter your maeks in percenatge to know about your grades"<<endl;

cin>>marks;
if((marks>80)&&(marks<90)){
    cout<<"Your obtained grade is A"<<endl;
}
    else if((marks >70)&&(marks <80)){
        cout<<"Your grade is B"<<endl;
    }
    else if((marks >60)&&(marks <70)){
        cout<<"Your grade is C"<<endl;
    }
    else{
        cout<<"You had failed cognitively"<<endl;
    }
return 0;
}