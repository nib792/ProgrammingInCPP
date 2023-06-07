// runtime polymorphism are quite clearly  explained by the concept of function over riding.
#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
    void show()
    {
        cout << "show base class" << endl;
    }
};
class derived : public base
{
public:
    // print() is already a virtual function so in derived class we can directly use void print() explicitly
    void print()
    {
        cout << "print derived class" << endl;
    }
    void show()
    {
        cout << "show derived class" << endl;
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    // virtual function binded at runtime
    bptr->print();
    // output==print derived class since the declaration of print() is under the virtual void category
    bptr->show();
    // output== show base class
    return 0;
}