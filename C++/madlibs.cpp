#include<iostream>
using namespace std;
int main(){
    //we are going to build a game called a madlibs game where we will bw using  a getline function for getting the input from the users which is already been defined inside the c++ library to get the input from the users//
    string color,pluralNoun,celebrity;
    cout<<"enter the name of color"<<endl;
     getline(cin,color); 
    cout<<"enter the name of pluralNoun"<<endl;
     getline(cin,pluralNoun); 
    cout<<"enter the name of celebrity"<<endl;
     getline(cin,celebrity); 

     cout<<"Roses are "<<color<<endl;
     cout<<pluralNoun<<"are blue"<<endl;
     cout<<"I love "<<celebrity<<endl;
   
return 0;
}