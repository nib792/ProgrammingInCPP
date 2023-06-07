#include<iostream>
using namespace std;
int main(){
    //finding a facytoraial of any desired number
int fact,num;

fact=1;
cout<<"Entetr the vlaue of deired number "<<endl;
cin>>num;
if(num<0){
    cout<<"Factorial; of negative number doesnt even exist"<<endl;
}
else{
    for(int i=1;i<=num;i++){
        fact=fact*i;
        //fact *=i;
    }
    cout<<"The factorail;a of the given nuber is "<<fact<<endl;
}
return 0;
}