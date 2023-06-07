#include<iostream>
using namespace std;
class circle{
    private:
    float radius,area,circumference;
    const  float PI=3.1415672;
    public:
    void getInfo()
 {
     cout<<"Enter the radius of the circle"<<endl;
     cin>>radius;
     area=PI*radius*radius;
     circumference=2*PI*radius;
 }   
 void displayInfo(){
     cout<<"The area and the circumfernce of the circle for the given radius i.e     "<< radius<<" are "<<area<<" and "<< circumference<<" respectivey"<<endl;
 }
};
int main(){
    circle c1;
    c1.getInfo();
    c1.displayInfo();
    return 0;
}