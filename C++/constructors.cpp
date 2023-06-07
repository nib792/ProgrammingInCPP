#include <iostream>
using namespace std;
class constructor
{
private:
    int a, b;

public:
    // default constructors
    constructor()
    {
        a = 1;
        b = 2;
        cout << "The values of  a and b are " << a << "&" << b << endl;
    }
    // parameterized constructors
    constructor(int p, int q)
    {
        a = p;
        b = q;
        cout << "The values of a and b are" << a << "&" << b << endl;
    }
    // for copy constructors in c++
    constructor(constructor &obj)
    {
        a = obj.a;
        b = obj.b;
        cout << "The values of a and b are" << a << "&" << b << endl;
    }
};
int main()
{
    // son in conclusion we can conclude with the fact that for a copy constructor to be
    // executed we first need to call the constructor base that needs to be copied then
    // only we will be able to execute the copy constructor whose command is
    /*class_name(class_name & obj_name){
        value=obj_name.variable likewise so on and so forth

    }*/
    system("cls");
    constructor c;
    constructor c1(2, 4);

    constructor c2(c1);
    constructor c3(4, 8);
    constructor c4(c3);
    return 0;
}