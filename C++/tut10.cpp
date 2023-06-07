#include <iostream>
using namespace std;
int main()
{
    // for loop in c_++
    /* There are three types of loops in c++
    as for while and dowhile loops in c++
    */
    /* for (int i = 1; i <= 10; i++)
     {
         cout << i << endl;
         i++;
     }
 */
    // while loops in c++
    // printing 1 to5  using while loops in c++
    /* int i = 1;
     while (i <= 5)
     {
         cout << i << endl;
         i++;
     }
 */
    // infnite while loop is also posssible
    // do while loop in c++
    /*int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=3);

    */
    // multipliaction table of any number using any of the lopps

    int num;
    cout << "Enter the value of any number" << endl;
    cin >> num;
    /*  for (int i = 1; i <= 10; i++)
      {
          cout  << num << "*"
                << i<<"=" << num * i<<endl;

      }
      */
    // same problem using do while loop in c++
    int i = 1;
   /* while (i <= 10)
    {
         cout << num << "*"
                  << i << "=" << num * i << endl;
        i++;
    }
    */
   //same  prohblem using do while loop in c++
   do{
       cout << num << "*"
                  << i << "=" << num * i << endl;
        i++;
   }while(i<=10);

    return 0;
}