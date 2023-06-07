#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i < 6; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}