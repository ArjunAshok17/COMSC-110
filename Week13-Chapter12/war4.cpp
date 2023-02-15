// Lab 12.3
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

struct PlayingCard{
    int suit, value;
};

void outputCard(PlayingCard& x, string player);
bool getYesOrNo();

int main(){
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program simulates the card game war between the user and computer using structures" << endl << endl;

    // Initialization
    PlayingCard user, comp;
    
    // Variables
    int compScore = 0, userScore = 0;
    bool cont = true;

    // Outer Loop
    while(cont)
    {
        // Function Calls
        outputCard(comp, "Computer");
        outputCard(user, "User");
        
        // Calculations + Output
        if(comp.value < user.value)
        {
            userScore++;
            cout << "--<< User Wins! >>--" << endl;
        }
        if(comp.value == user.value)
            cout << "==<< It's a tie >>==" << endl;
        if(comp.value > user.value)
        {
            compScore++;
            cout << "--<< Computer Wins! >>--" << endl;
        }
        cout << "Computer Wins: " << compScore << ", Human Wins: " << userScore << endl;

        cont = getYesOrNo();
        cout << endl << endl;
    } 

    cout << endl << endl;
}

void outputCard(PlayingCard& x, string player){
    // Player's Card
    x.value = 2 + (rand() % 12), x.suit = rand() % 3;;

    if(x.value >= 2 && x.value <= 10)
        cout << "The " << player << "'s card is a " << x.value;
    if(x.value == 11)
        cout << "The " << player << "'s card is a Jack";
    if(x.value == 12)
        cout << "The " << player << "'s card is a Queen";
    if(x.value == 13)
        cout << "The " << player << "'s card is a King";
    if(x.value == 14)
        cout << "The " << player << "'s card is an Ace";
        
    if(x.suit == 0)
        cout << " of Spades" << endl;
    if(x.suit == 1)
        cout << " of Diamonds" << endl;
    if(x.suit == 2)
        cout << " of Hearts" << endl;
    if(x.suit == 4)
        cout << " of Clubs" << endl;    
}

bool getYesOrNo(){
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
        return false; // Break from outer loop
    else
        return true;
}