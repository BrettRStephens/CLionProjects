#include <iostream>
#include <cstdlib> // for rand() and srand()

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


/*void printGuess(int guess, int count)
{
    std::cout << "Guess #" << count << ": " << guess;
}
*/

void compareAndPrintGuess(int random_number, int total)
{

    for (int count = 1; count <= total; ++count)
    {

        std::cout << "Guess #" << count << ": ";
        int guess;
        std::cin >> guess;

        // printGuess(guess, count);
        if (guess > random_number) {
            std::cout << "Your guess is too high\n";
            //char ans = 'y';
            //return ans;
        } else if (guess < random_number) {
            std::cout << "Your guess is too low\n";
            //char ans = 'y';
            //return ans;
        } else if (guess == random_number) {
            std::cout << "Correct! You win!\n";
            //std::cout << "Would you like to play again?";
            //char ans;
            //std::cin >> ans;
            //return ans;
        }  // no more guesses left

        //std::cout << "Would you like to play again?";
        //char ans;
        //std::cin >> ans;
        //return ans;
    }

    std::cout << "Sorry, you loose. The correct number was " << random_number << "\n";
}

bool playAgain()
{
    // Keep asking the user if they want to play again until they pick y or n.
    char ch;
    do
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;
    } while (ch != 'y' && ch != 'n');

    return (ch == 'y');
}


int main ()

{
    // define and initialize character for do,while loop
    //char ans = 'y';

    do
    {
        srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
        int random_number = getRandomNumber(1, 100);

        // define total number of guesses allowed
        int total = 7;
        std::cout << "Let's play a game. I'm thinking of a number. You have " << total << " tries to guess what it is.\n";

       // ans = compareAndPrintGuess(guess, random_number);
        compareAndPrintGuess(random_number,total);
    }
    while (playAgain());


    return 0;
}

