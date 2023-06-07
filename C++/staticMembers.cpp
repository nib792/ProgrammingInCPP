// WAP to input the items name and price and display info with  count of total number of items after each input(using static members concept)
#include <iostream>
using namespace std;
class items
{
private:
    char name[10];
    float price;
    static int counter;
    static const char I[];

public:
    void displayInfo();
    static void displayCounter();
};
int items ::counter = {0};
const char items :: I[]="ITEMS";

void items ::displayInfo()
{
    {
        cout << "Enter the name and price of the item:\n";
        cin >> name >> price;
        cout << "Name=" << name << endl
             << "price=" << price << endl<<"statc char is "<<I<<endl;
        counter = counter + 1;
    }
}
void items ::displayCounter()
{
    cout << "counter=" << counter << endl;
}
int main()
{
    system("cls");
    items i1;
    i1.displayInfo();
    i1.displayCounter();
    items i2, i3;
    i2.displayInfo();
    i2.displayCounter();
    i3.displayInfo();
    i3.displayCounter();
    return 0;
}
