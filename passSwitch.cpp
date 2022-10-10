// Lab 7.1
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

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program modifies the pass-no-pass algorithm using switch logic" << endl << endl;

    // User Inputs
    char grade;
    cout << "What is your grade [A, B, C, D, or F]: ";
    cin >> grade;
    cin.ignore(1000,10);

    // Calculations + Outputs
    switch(grade)
    {
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
            cout << "You Pass" << endl;
            break;
        case 'D':
        case 'd':
        case 'F':
        case 'f':
            cout << "You do NOT pass" << endl;
            break;
        default:
            cout << "Invalid entry" << endl;       
    }
}