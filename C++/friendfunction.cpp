// friend function
// Wap to make a program having packets if  items like biscuits chips chocolates and pastries 12,20,34 and 45 resp.y info with change in packets of biscuits to 90
// a)display the default vlaues use default function concept
// b) display info with the change in packets of chips to 100
// c) display info with the change in packets chicolates  to 20
// d) display info with the change in packets of pastries to 200
// e) display info with the change  in evertything and display


#include <iostream>
using namespace std;
void items(int biscuit = 12, int chips = 20, int chocolates = 34, int pastries = 45)
{
    cout << "number of items are:" << endl
         << "Biscuits=" << biscuit << endl
         << "chips=" << chips << endl
         << "chocolates=" << chocolates << endl
         << "pastries=" << pastries << endl;
}
int main()
{

    items();//a
    system("pause");
    system("cls");
    items(90);//b
    system("pause");
    system("cls");
    items(12,100);//c
    system("pause");
    system("cls");
    items(12,20,20);
    items(12,20,34,200);
    cout<<"The changed items are:"<<endl;
    items(1,2,3,4);

    return 0;
}
