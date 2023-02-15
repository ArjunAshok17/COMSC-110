// Lab 10.3
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
    cout << "Description: This program calculates temperature conversions with file specified inputs and an EOF loop" << endl << endl;

    // File Inputs
    ifstream fin;
    fin.open("temps.txt");
    if(!fin.good()) throw "I/O Error";

    while(fin.good())
    {
        // Variables
        double tempC, tempF;
        fin >> tempC;
        fin.ignore(1000,10);

        // Break with Sentinel
        if(tempC == -999) break;

        // Calculations
        tempF = (9.0/5) * tempC + 32;

        // Outputs
        cout.unsetf(ios::fixed|ios::showpoint);
        cout << setprecision(6); // Reset to default precision
        cout << tempC << " Celsius equals ";
    
        cout.setf(ios::fixed|ios::showpoint);
        cout << setprecision(1); // One decimal point specified
        cout << tempF << " Fahrenheit" << endl << endl;
    }
    fin.close();

    cout << endl << endl;
}