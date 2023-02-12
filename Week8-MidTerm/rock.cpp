// Lab MidTerm Project
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Replit.com
// Compiler(s) used: Visual Studio Code w/ MinGW && Replit.com
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
    // Initialize the computer's random number generator
    srand(time(0)); rand(); // Random number generation changes every time

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program simulates a rock-paper-scissors game between the computer and user" << endl << endl;
    
    // Declare variables
    char userHand, compHand; // Can be R, P, or S for Rock, Paper, or Scissors depending on the selection, or Q for the userHand
    string result = ""; // Stores the result (human wins, computer wins, tie)
    int randNum; // Stores the computer's card as number (randomly generated in the loop);
    int compWins = 0, userWins = 0, ties = 0; // Embellishments (win counter)

    // Start loop
    while(true)
    {
        // Determine computer's choice (code block #1)
        int randNum = (rand() % 3); // Random number from 0-2
        if(randNum == 0)
            compHand = 'R';
        else if(randNum == 1)
            compHand = 'P';
        else
            compHand = 'S';
        
        // Prompt for, and read, the human's choice (code block #2)
        while(true) // Validation loop
        {
            cout << "Choose [Rock (R), Paper (P), Scissors (S), Quit(Q)]: ";
            cin >> userHand;
            cin.ignore(1000,10);

            if(userHand == 'R' || userHand == 'r' || userHand == 'P' || userHand == 'p' || userHand == 'S' 
            || userHand == 's' || userHand == 'Q' || userHand == 'q')
            {
                break;
            }
        }
        userHand = toupper(userHand); // All answers become uppercase to simplify if-statements -- After validation loop to ensure no non-chars

        // If human wants to quit, break out of loop (code block #3)
        if(userHand == 'Q')
            break;

        // Determine the winner (code block #4)
        switch(userHand)
        {
            case 'R':
                switch(compHand)
                {
                    case 'P':
                        result = "Computer Wins!";
                        break;
                    case 'S':
                        result = "User Wins!";
                        break;
                    default:
                        result = "Tie!";
                        break;
                } // compHand switch
                break;
            case 'P':
                switch(compHand)
                {
                    case 'S':
                        result = "Computer Wins!";
                        break;
                    case 'R':
                        result = "User Wins!";
                        break;
                    default:
                        result = "Tie!";
                        break;
                } // compHand switch
                break;
            case 'S':
                switch(compHand)
                {
                    case 'R':
                        result = "Computer Wins!";
                        break;
                    case 'P':
                        result = "User Wins!";
                        break;
                    default:
                        result = "Tie!";
                        break;
                } // compHand switch
                break;
        } // userHand switch

        // Print results (code block #5)
        cout << "Computer choice: " << compHand << ", User choice: " << userHand << ", " << result << endl;

        // Embellishments (win counter)
        if(result == "Computer Wins!")
            compWins++;
        else if(result == "User Wins!")
            userWins++;
        else
            ties++;
        
        cout << "Computer Wins: " << compWins << ", User Wins: " << userWins << ", Ties: " << ties << endl << endl;

    // End loop
    }   

    // End program
}