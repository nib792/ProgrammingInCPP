#include <iostream>
using namespace std;
class canteen
{
private:
    char name[10], addres[10];
    int num_items;
    float base_price=2;

public:
    int nischal=4;
    void getInfo()
    {
        cout << "Enter the name ,addres and number of items along with the base price of the food available in th canteen in order" << endl;
        cin >> name >> addres >> num_items >> base_price;
    }
    void displayInfo()
    {
        cout << "The require informations are " << endl;
        cout << "name=" << name << endl
             << "ADDRESS=" << addres << endl
             << "Number of items =" << num_items << endl
             << "base price for food=" << base_price << endl;
    }
};

int main()
{
    cout<<nischal;
    //cout<<base_price;
   /* canteen c[3];
    for (int i = 1; i <= 3; i++)
    {
        c[i].getInfo();
    }
    for (int i = 1; i <= 3; i++)
    {
        c[i].displayInfo();
    }*/
    return 0;
}