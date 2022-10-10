// Lab 7.7
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
//

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cctype>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main(){
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program simulates a game of war in a loop until the user ends the game" << endl << endl;

    // Variables
    int compScore = 0, userScore = 0;

    // Outer Loop
    while(true)
    {
        // Computer's Card
        int randCard = 2 + (rand() % 12), randSuit = rand() % 3;;

        if(randCard >= 2 && randCard <= 10)
            cout << "The Computer's card is a " << randCard;
        if(randCard == 11)
            cout << "The Computer's card is a Jack";
        if(randCard == 12)
            cout << "The Computer's card is a Queen";
        if(randCard == 13)
            cout << "The Computer's card is a King";
        if(randCard == 14)
            cout << "The Computer's card is an Ace";
        
        if(randSuit == 0)
            cout << " of Spades" << endl;
        if(randSuit == 1)
            cout << " of Diamonds" << endl;
        if(randSuit == 2)
            cout << " of Hearts" << endl;
        if(randSuit == 4)
            cout << " of Clubs" << endl;

        // User's Card
        int userCard = 2 + (rand() % 12), userSuit = rand() % 3;;

        if(userCard >= 2 && userCard <= 10)
            cout << "The User's card is a " << userCard;
        if(userCard == 11)
            cout << "The User's card is a Jack";
        if(userCard == 12)
            cout << "The User's card is a Queen";
        if(userCard == 13)
            cout << "The User's card is a King";
        if(userCard == 14)
            cout << "The User's card is an Ace";
        
        if(userSuit == 0)
            cout << " of Spades" << endl;
        if(userSuit == 1)
            cout << " of Diamonds" << endl;
        if(userSuit == 2)
            cout << " of Hearts" << endl;
        if(userSuit == 4)
            cout << " of Clubs" << endl;
        
        // Calculations + Output
        if(randCard < userCard)
        {
            userScore++;
            cout << "--<< User Wins! >>--" << endl;
        }
        if(randCard == userCard)
            cout << "It's a tie" << endl;
        if(randCard > userCard)
        {
            compScore++;
            cout << "--<< Computer Wins! >>--" << endl;
        }
        cout << "Computer Wins: " << compScore << ", Human Wins: " << userScore << endl;

        // Continue Game - Validation Loop
        char cont;
        while(true)
        {
            cout << "Continue [Y/N]? ";
            cin >> cont;
            cin.ignore(1000,10);

            cont = toupper(cont);
            if(cont == 'Y' || cont == 'N')
                break; // Break from validation loop
        }
        if(cont == 'N')
            break; // Break from outer loop
        cout << endl << endl;
    } 
}