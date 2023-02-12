// Lab 9.4
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
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program demonstrates round-off error" << endl << endl;
    
    // Loop
    for(double x = 0; x != 17.1; x += 0.3){ // Theoreetically stops after 57 cycles, but double x = 17.1000...0142 not 17.1
        cout << x << endl;
    }
    cout << endl;
}
