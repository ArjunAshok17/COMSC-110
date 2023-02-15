// Lab 11
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
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in input and output file names with default values" << endl << endl;

    // Variables
    string fileIn, fileOut, defaultIn = "fileContainingEmails.txt", defaultOut = "copyPasteMyEmails.txt";

    // User Inputs
    cout << "Enter the input file name [default: " << defaultIn << "]: ";
    getline(cin, fileIn);
    if(fileIn == "")
        fileIn = defaultIn;
    else
        defaultOut = fileIn;
    
    cout << "Enter the output file name [default: " << defaultOut << "]: ";
    getline(cin, fileOut);
    if(fileOut == "")
        fileOut = defaultOut;

    // Echo
    cout << "Input file selected: " << fileIn << endl;
    cout << "Output file selected: " << fileOut << endl << endl;
}