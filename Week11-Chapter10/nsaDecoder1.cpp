// Lab 10.7
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
    cout << "Description: This program takes in an encoded file and outputs the decoded message" << endl << endl;

    // File Inputs/Outputs
    ifstream fin;
    fin.open("secret.txt");
    if(!fin.good()) throw "I/O Error";

    // EOF Decoding Loop

    while(fin.good())
    {
        string line;
        getline(fin,line);

        // Decoding Loop
        for(int i = 0; i < line.length(); i++)
        {
            line[i]--;
        }
        cout << line << endl;
    }

    // Close files
    fin.close();

    cout << endl << endl;
}