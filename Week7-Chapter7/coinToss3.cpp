// Lab 7.5
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
    cout << "Description: This program tosses a coin a user-specified number of times then loops and asks again until a sentinel is entered" << endl << endl;

    // Outer Loop
    while(true)
    {
        // User Inputs
        int numTosses;
        cout << "Enter the number of coin tosses [0 to exit]: ";
        cin >> numTosses;
        cin.ignore(1000,10);

        if(numTosses == 0)
        {
            cout << endl;
            break;
        }

        // Inner Loop
        for(int j = 0; j < numTosses; j++)
        {
            // Calculations
            int toss = (rand() % 2);

            // Outputs
            if(toss == 1){
                cout << "Tails" << endl;
            }else{
                cout << "Heads" << endl;
            }
        }
        cout << endl << endl;
    } 
}