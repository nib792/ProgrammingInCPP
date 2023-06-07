// friend function will always have a argument with it
// WAP to add 100 to a num in a class using friend function and display
#include <iostream>
using namespace std;
class class1
{
private:
    int num;

public:
    void getDisplay()
    {
        cout << "Enter a nunmber:\n";
        cin >> num;
        cout << "num=" << num << endl;
    }
    // friend function declaration
    friend void friendFunction(class1 object);
};
void friendFunction(class1 object)
{
    int sum;
    sum = object.num + 100;
    cout << "after adding 100 sum is:" << sum << endl;
}
    int main()
    {
        system("cls");
        class1 c1;
        c1.getDisplay();
        friendFunction(c1);
        return 0;
    }