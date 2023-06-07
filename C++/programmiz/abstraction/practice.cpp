// wap to print the sum and product of two numbers using sum() and product() functions
// use concept of all constructors
#include <iostream>
using namespace std;
class maths
{
private:
    int n1, n2;
/ 
public:
    maths()
    {
        n1 = 2;
        n2 = 4;
    }
    maths(int num1, int num2)
    {
        n1 = num1;
        n2 = num2;
    }
    maths(maths &obj)
    {
        n1 = obj.n1;
        n2 = obj.n2;
    }

    void display()
    {
        sum();
        product();
    }
    void sum()
    {
        cout << "the addition is " << n1 + n2 << endl;
    }
    void product()
    {
        cout << "The product is " << n1 * n2 << endl;
    }
};
int main()
{
    system("cls");
    maths m1;//default
    m1.display();
    maths m2(5, 6);//parameterized
    m2.display();
    maths m3(m2);//copy
    m3.display();
    maths m4(m1);
    m4.display();//copy
}