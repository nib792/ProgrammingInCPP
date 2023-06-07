/*here we will be using the while loops of c++ in a very useful way such that we will be  creating a trait secret number ie initaialized and declare a secret number and ask for the user to guess tha t secret number and ask another guest to try guess the number if th guess is incorrect*/
#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;
    /*while (secretNum != guess)
    {
        cout << "Enter the number you had guessed" << endl;
        cin >> guess;
    }
    if (guess == secretNum)
    {
        cout << "Congratulations you ha guessed correctly" << endl
             << "You won!" << endl;
    }
    else
    {
        cout << "Your guess is incorrect" << endl
             << "Next user plese proceed your guess" << endl;
    }
*/
//using a do while loop for the same guessing probelm gamne theeory based  game 
 do{
     cout<<"Enter the number you had guessed"<<endl;
     cin>>guess;
 }while(guess!=secretNum);
 cout<<"Congratulations you had guessed th right number"<<endl;

    return 0;
}