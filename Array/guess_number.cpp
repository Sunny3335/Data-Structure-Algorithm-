#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); // seed random number generator
    num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high!\n\n";
        else if (guess < num)
            cout << "Too low!\n\n";
        else
        {
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
            break; // Exit the loop if the guess is correct
        }

        if (tries >= 5)
        {
            cout << "Sorry, you've reached the maximum number of guesses.\n";
            cout << "The correct number was: " << num << "\n";
            break; // Exit the loop if the maximum number of guesses is reached
        }
    } while (true);

    return 0;
}