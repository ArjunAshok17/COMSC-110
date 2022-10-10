// Lab 6.6
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include <cmath>
#include <ctime>
#include <cstdlib>

int main(){
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)
    
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program is a guessing game with a user guessing a randomly generated number (1 guess)" << endl << endl;

    // Variables
    int randNumber, userGuess;

    // Guessing Game
    randNumber = 1 + (rand() % 10); // Random number 1 - 10

    // User Inputs
    cout << "I'm thinking of number between 1 and 10. Have a guess: ";
    cin >> userGuess;
    cin.ignore(1000,10);

    // Calculations + Outputs
    if(userGuess == randNumber)
        cout << "That's correct -- the number was " << randNumber << endl;
    if (userGuess > randNumber)
        cout << "That's too high -- the number was " << randNumber << endl;
    if(userGuess < randNumber)
        cout << "That's too low -- the number was " << randNumber << endl;    
}