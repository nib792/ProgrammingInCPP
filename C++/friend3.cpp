// WAp TO add two numbers in two classes and display the output using friend function

#include <iostream>
using namespace std;
class B;
class A
{
private:
    int num1;

public:
    void get()
    {
        cout << "Enter the value of num1" << endl;
        cin >> num1;
        cout << "NUm1=" << num1 << endl;
    }
    friend void f1(A obj1, B obj2);
};
class B
{
private:
    int num2;

public:
    void getD()
    {
        cout << "Enter the value of num2\n";
        cin >> num2;
        cout << "NUm2=" << num2 << endl;
    }
    friend void f1(A obj1, B obj2);
};
void f1(A obj1, B obj2)
{
    int sum;
    sum = obj1.num1 + obj2.num2;
    cout << "The sum   after adding num1 and num2 is" << sum << endl;
}
int main()
{
    system("cls");
    A a;
    B b;
    a.get();
    b.getD();
    f1(a, b);
}
