#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any character";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
     cout<<"The entered cahracter is a vowel of lowercase"<<endl;
    }
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"n""The enterd character is a vowel of an upper case";
    }
    else{
        cout<<"\n""The enterd character is not  a vowel";
    }

    return 0;
}
