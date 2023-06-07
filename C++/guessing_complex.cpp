#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;
    int guessLimit = 3;
    int guessCount = 0;
    bool outOfGuesses = false;
    while (secretNum != guess && !outOfGuesses)
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter your guess" << endl;
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses)
    {
        cout << "You lost" << endl;
    }
    else
    {
        cout << "You won and guessed the number correctly" << endl;
    }
    return 0;
}