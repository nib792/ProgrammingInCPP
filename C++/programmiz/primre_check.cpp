#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the value of that number" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "enntered number is  aprime number" << endl;
    }
    else
    {
        cout << "Entered number is not a prime numbner" << endl;
    }
    return 0;
}