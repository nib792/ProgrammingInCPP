#include<iostream>
using namespace std;
class encapsulation{
    //Here by default any data or the properties inside of a class is set under private block which by itself is an access modifiers
    private:
    int x;
    public:
    //function to set the value of x
    void set(int a){
        x=a;
    
    }
    //function to return the value of variable x
    int get(){
        return x;
    }
};
int main(){
    encapsulation E;
    E.set(7);
    cout<<E.get();
    return 0;
}