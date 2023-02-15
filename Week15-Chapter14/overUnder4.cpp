// Lab 14.1
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Replit.com
// Compiler(s) used: Visual Studio Code w/ MinGW && Replit.com
//

#include <algorithm>
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

struct Nums
{
    int pastGuess;
    Nums* next; // Next-link
};

int main(){
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program is an upgraded guessing game with a user guessing a randomly generated number (multiple guesses) with unlimited plays" << endl << endl;

    // Variables + Linked List
    int randNumber;
    Nums* start = 0;

    // Guessing Game
    randNumber = 1 + (rand() % 100); // Random number 1 - 100
    
    cout << "I'm thinking of number between 1 and 100. Have a guess: ";

    while(true)
    {
        // Node Creation
        Nums* aNum = new Nums;

        // User Input
        int userGuess;
        cin >> userGuess;
        cin.ignore(1000, 10);

        // Adding To List
            // Variables
            bool newGuess = true;
            Nums* p;
            
            // Checking Past Guesses
            for(p = start; p; p = p->next)
            {
                int check = p->pastGuess;
                if(userGuess == check)
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
            aNum->pastGuess = userGuess;
            aNum->next = start;
            start = aNum;

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