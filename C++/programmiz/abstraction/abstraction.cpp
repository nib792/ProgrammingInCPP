#include<iostream>
using namespace std;
class abstraction
{
//declaration of variable under private section
private:
int a,b;
//Block to set the values of declared variables
public:
void set(int x, int y){
    a=x;
    b=y;
}
void dispaly(){
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
};
int main(){
    abstraction A;
    A.set(3,4);
    A.dispaly();
    return 0;
}