// Lab 13.3
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

int main(){
    srand(time(0)); // For RNG

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in a list of songs and randomly shuffles and plays them" << endl << endl;

    // Lists
    const int MAX_SONGS = 200;
    int nSongs = 0;
    string song[MAX_SONGS];

    // File IO
    ifstream fin;
    fin.open("songs.txt");
    if(!fin.good()) throw "I/O Error";

    // EOF Loop
    for(int i = 0; fin.good() && i < MAX_SONGS; i++)
    {
        string aSong;
        getline(fin, aSong);

        song[nSongs++] = aSong;
    }
    fin.close();

    // Song Playing Loop
    while(true)
    {
        // User Inputs
        char response;
            // Validation Loop
            while(true)
            {
                cout << "Play a song [Y/N]: ";
                cin >> response;
                cin.ignore(1000, 10);

                if(toupper(response) == 'Y' || toupper(response) == 'N')
                    break;
            }
        if(toupper(response) == 'N') break;

        // Outputs
        int randIndex = (rand() % nSongs); // Random number from 0 - (nSongs - 1)
        cout << song[randIndex] << endl << endl;
    }

    cout << endl << endl;
}