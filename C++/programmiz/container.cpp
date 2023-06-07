#include <iostream>
using namespace std;
class book
{
//private:
private:
    char name[20];
    int page;

public:
    void getData()
    {
        cout << "enter the name and pags of the book";
        cin >> name >> page;
    }
    void displayData()
    {
        cout << "name=" << name << endl
             << "pages=" << page << endl;
    }
};
class seller
{  private:
    char dealer[20];
    book B;
  public:
    void getData()
    {
        B.getData();
        cout << "Enter the name of the dealer";
        cin >> dealer;
    }
    void displayData()
    {
        B.displayData();
        cout << "Name of the dealer=" << dealer;
    }
};
int main(){
    seller S;
    S.getData();
    S.displayData();
    return 0;
}