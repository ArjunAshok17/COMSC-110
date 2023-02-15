// Lab 11.7
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
    cout << "Description: This program encodes a message with an improved encryption using arrays" << endl << endl;

    // User Inputs
    string fileName;
    cout << "Enter the name of the file to encode: ";
    getline(cin,fileName);

    // File Inputs/Outputs
    ifstream fin;
    fin.open(fileName.c_str());
    if(!fin.good()) throw "I/O Error";

    ofstream fout;
    fout.open("secret.txt");
    if(!fout.good()) throw "I/O Error";

    // EOF Encoding Loop
    const int SIZE = 10;
    int encode[SIZE] = {1, -2, 3, -5, 8, -13, 21, -34, 55};

    int count = 0;
    while(fin.good())
    {
        string line;
        getline(fin,line);

        // Decoding Loop
        for(int i = 0; i < line.length(); i++)
        {
            int index = i % SIZE;
            line[i] += encode[index];
        }
        fout << line << endl;
    }

    // Close files
    fin.close();
    fout.close();

    cout << endl << endl;
}