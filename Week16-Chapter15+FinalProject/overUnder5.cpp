// Lab 15.1
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Replit.com
// Compiler(s) used: Visual Studio Code w/ MinGW && Replit.com
//

#include <algorithm>
#include <deque> // Collections
#include <fstream> // File IO
#include <iomanip>
#include <iostream> // Console IO
#include <string> // String var

using namespace std;

#include <cctype>
#include <cmath>
#include <ctime> // For time and RNG
#include <cstdlib>

#ifdef _WIN32 // For timing and other OS differences
#include <windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program is an upgraded guessing game with a user guessing a randomly generated number (multiple guesses) with unlimited plays using collections" << endl << endl;

    // Variables + Collection
    int randNumber;
    deque<int> nums;

    // Guessing Game
    randNumber = 1 + (rand() % 100); // Random number 1 - 100
    
    cout << "I'm thinking of number between 1 and 100. Have a guess: ";

    while(true)
    {
        // User Input
        int userGuess;
        cin >> userGuess;
        cin.ignore(1000, 10);

        // Adding To List
            // Variables
            bool newGuess = true;
            
            // Checking Past Guesses
            for(int i = 0; i < nums.size(); i++)
            {
                if(userGuess == nums[i])
                {
                    newGuess = false;
                    break;
                }
            }

            if(!newGuess)
            {
                cout << "You already guessed " << userGuess << " -- guess again: ";
                continue;
            }

            // Adding
            nums.push_back(userGuess); // nums[nums.size() - 1] = newest guess added

        // Calculations + Outputs
        if(userGuess == randNumber)
        {
            cout << "That's correct -- the number was " << randNumber << endl;
            break;
        }
        if (userGuess > randNumber)
            cout << "That's too high -- guess again: ";
        if(userGuess < randNumber)
            cout << "That's too low -- guess again: ";
    }

    cout << endl << endl;
    system("pause");
}