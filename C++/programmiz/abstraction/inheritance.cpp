#include <bits/stdc++.h>
using namespace std;
// parent class declaration
class ujwal
{
public:
    int ujwalId;
};
// sub class (steve )inheriting from the parent class or superclass (ujwal)
class steve : public ujwal
{
public:
    int steveId;
};
int main()
{
    steve obj;
    // class steves object does behold the data menmbers and members functions of the class ujwal (parent )
    obj.ujwalId = 48;
    obj.steveId = 40;
    cout << "ujjwals id(parent class)=" << obj.ujwalId << endl;
    cout << "Steve's id (child class)=" << obj.steveId << endl;
    return 0;
}