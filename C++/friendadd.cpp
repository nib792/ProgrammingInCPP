// wap to find max and min among 4 numbers 2 in class a and 2 in class B USING FRiend //function
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int num1, num2;

public:
    void getD()
    {
        cout << "Enter the value of num1 and num2" << endl;
        cin >> num1 >> num2;
    }
    friend void evaluate(A obj1, B obj2);
};
class B
{
private:
    int num1, num2;

public:
    void getD()
    {
        cout << "Enter the value of num1 and num2" << endl;
        cin >> num1 >> num2;
    }
    friend void evaluate(A obj1, B obj2);
};
void evaluate(A obj1, B obj2)
{
    int lg = obj1.num1;
    int sm = obj1.num1;
    if (lg <= obj1.num2)
    {
        lg = obj1.num2;
    }
    if (lg <= obj2.num1)
    {
        lg = obj2.num1;
    }
    if (lg <= obj2.num2)
    {
        lg = obj2.num2;
    }
    if (sm >= obj1.num2)
    {
        sm = obj1.num2;
    }
    if (sm >= obj2.num1)
        sm = obj2.num1;
    if (sm >= obj2.num2)
        sm = obj2.num2;
        cout<<"The largest among the four numbers two from each class is "<<lg<<endl;
        cout<<"The smallest of four numbers two from esach class is"<<sm<<endl;
}
int main()
{
    system("cls");
    A a;
    B b;
    a.getD();
    b.getD();
    evaluate(a,b);
    return 0;
}