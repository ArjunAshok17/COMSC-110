// Lab 13.1
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

bool checkDuplicate(string s, string* name, int nNames);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in a text file and outputs alphabetically sorted names" << endl << endl;

    // Empty List
    const int MAX_NAMES = 5;
    int nNames = 0;
    string name[MAX_NAMES];

    // User Inputs
    string fileName;
    cout << "Enter the name of the file containing the names: ";
    getline(cin, fileName);

    // File IO
    ifstream fin;
    fin.open(fileName.c_str());
    if(!fin.good()) throw "I/O Error";

    // EOF Loop
    while(fin.good() && nNames < 5)
    {
        string aName;
        getline(fin, aName);

        if(checkDuplicate(aName, name, nNames)) continue; // Check duplicates
        if(aName == "") continue; // Check blank lines

        if(nNames < MAX_NAMES) 
            name[nNames++] = aName;
    }
    fin.close();

    // Sort Alphabetically
    for(int i = 0; i < nNames; i++)
    {
        for(int j = i + 1; j < nNames; j++)
        {
            if(name[i] > name[j])
            {
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    // Outputs
    for(int i = 0; i < nNames; i++)
    {
        cout << name[i] << endl;
    }

    cout << endl << endl;
    system("pause");
}

bool checkDuplicate(string s, string* name, int nNames){
    bool duplicate = false;

    for(int i = 0; i < nNames; i++)
    {
        string sUp = s, nameUp = name[i];
        for(int j = 0; j < sUp.length(); j++){
            sUp[j] = toupper(sUp[j]); // Uppercase for all characters
        }
        for(int k = 0; k < nameUp.length(); k++){
            nameUp[k] = toupper(nameUp[k]); // Uppercase for all characters
        }
        if(sUp == nameUp)
            duplicate = true;
    }
    return duplicate;
}