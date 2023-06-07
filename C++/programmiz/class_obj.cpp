#include<iostream>
using namespace std;
class maths
{
    private:
    int a,b,sum;
    float avg;
    public:
    void getInfo()
    {
   cout<<"Enter the required values of a and  b"<<endl;
   cin>>a>>b;
   sum=a+b;
   avg=sum/2;
    }
    void displayInfo(){
    cout<<"The required sum of "<<a<<"and"<<b<<"is "<<sum<<endl<<"The required average value obtained is "<<avg<<endl;
    }
};
int main(){
    maths m1;
    m1.getInfo();
    m1.displayInfo();
    return 0;
}