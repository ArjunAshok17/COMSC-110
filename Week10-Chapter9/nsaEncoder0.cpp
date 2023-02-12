// Lab 9.2
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
    cout << "Description: This program scrambles user input for secrecy" << endl << endl;
    
    // User Input
    string original = "";
    cout << "Enter the string to be scrambled: ";
    getline(cin,original);

    // Loop
    for(int i = 0; i < original.length(); i++)
    {
        original[i]++;
    }

    cout << "Encoded Message: " << original << endl;
}
