// Lab 7.2
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
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program is a cross-OS countdown timer" << endl << endl;

    // Timer
    int seconds = 10;
    for(int i = 0; i <= 10; i++)
    {
        if(seconds == 10)
            cout << seconds;
        else if(seconds > 0)
            cout << " " << seconds;
        else
            cout << " " << seconds << " Blast Off!" << endl;
        cout.flush(); // For nice output
        cout << '\r'; // Clears console

        #ifdef _WIN32
        Sleep(1000); // 1000 milliseconds
        #else
        sleep(1); // 1 second
        #endif

        seconds--;
    }
}