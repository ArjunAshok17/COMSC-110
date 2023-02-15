// Lab 11.6
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
    cout << "Description: This program decodes an encoded message using arrays" << endl << endl;

    // File Inputs/Outputs
    ifstream fin;
    fin.open("secret.txt");
    if(!fin.good()) throw "I/O Error";

    // EOF Decoding Loop
    const int SIZE = 10;
    int decode[SIZE] = {-1, 2, -3, 5, -8, 13, -21, 34, -55};

    int count = 0;
    while(fin.good())
    {
        string line;
        getline(fin,line);

        // Decoding Loop
        for(int i = 0; i < line.length(); i++)
        {
            int index = i % SIZE;
            line[i] += decode[index];
        }
        cout << line << endl;
    }

    // Close files
    fin.close();

    cout << endl << endl;
}