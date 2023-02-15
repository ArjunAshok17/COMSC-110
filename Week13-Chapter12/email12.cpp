// Lab 12
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
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in input and output files and prints all lines with @ to the console" << endl << endl;

    // User Inputs
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

    // File Inputs/Outputs
    ifstream fin;
    fin.open(fileIn);
    if(!fin.good()) throw "I/O ERROR";

    // EOF Loop
    while(fin.good())
    {
        string line;
        getline(fin, line);

        // Symbol checking loop
        for(int i = 0; i < line.length(); i++)
        {
            if(line[i] == '@')
            {
                cout << line << endl;            
            }
        }
    }

    fin.close();

    cout << endl << endl;
    system("pause");
}