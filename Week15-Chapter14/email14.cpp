// Lab 14
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

bool isValidChar(char c);
bool checkDuplicate(string address, string* email, int nEmails);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in input and output files and prints all valid email addresses to the console (case-independent)" << endl << endl;

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
    
    // Email Address List
    const int MAX_EMAILS = 1000;
    int nEmails = 0;
    string email[MAX_EMAILS];

    // File Inputs/Outputs
    ifstream fin;
    fin.open(fileIn);
    if(!fin.good()) throw "I/O ERROR";

    // EOF Loop
    while(fin.good())
    {
        string line;
        getline(fin, line);

        // Symbol Checking Loop
        for(int i = 0; i < line.length(); i++)
        {
            if(line[i] == '@')
            {
                // Variables
                int s = 0, e = line.length(), hasDot = 0;

                // Starting Char Loop
                for(int j = i - 1; j >= 0; j--)
                {
                    if(!isValidChar(line[j]))
                    {
                        s = j + 1;
                        break;
                    }
                }

                if(s == i) // If there is no valid text before the @ symbol
                    continue;

                // Ending Char Loop + Dot Counter
                for(int k = i + 1; k < line.length(); k++)
                {
                    if(line[k] == '.')
                        hasDot++;

                    if(!isValidChar(line[k]))
                    {
                        e = k;
                        break;
                    }
                }

                // Storing Email
                string address = line.substr(s, e - s);

                if(hasDot > 0 && !checkDuplicate(address, email, nEmails) && nEmails < MAX_EMAILS)
                {
                    email[nEmails++] = address;
                }

            }
        }
    }

    fin.close();

    // Outputs
    for(int i = 0; i < nEmails; i++)
    {
        cout << email[i] << endl;
    }

    cout << endl << endl;
    system("pause");
}

bool isValidChar(char c){
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c == '.') || (c == '-') || (c == '_') || (c == '+'))
        return true;
    else
        return false;
}

bool checkDuplicate(string address, string* email, int nEmails){
    bool duplicate = false;

    for(int i = 0; i < nEmails; i++)
    {
        // Emails Are NOT Case Sensitive
        string addressUp = address, emailUp = email[i];
        for(int j = 0; j < addressUp.length(); j++){
            addressUp[j] = toupper(addressUp[j]); // Uppercase for all characters
        }
        for(int k = 0; k < emailUp.length(); k++){
            emailUp[k] = toupper(emailUp[k]); // Uppercase for all characters
        }

        if(addressUp == emailUp)
            duplicate = true;
    }
    return duplicate;
}