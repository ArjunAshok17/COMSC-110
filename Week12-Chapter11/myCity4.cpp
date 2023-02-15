// Lab 11.3
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
    cout << "Description: This program takes user specified high temperatures, echoes them, and counts how many times the highs and lows occur" << endl << endl;

    // User Inputs
    const int NUMTEMPS = 5;
    string city = "San Ramon, California", day1 = "Tuesday, April 13", day2 = "Wednesday, April 14", 
    day3 = "Thursday, April 15", day4 = "Friday, April 16", day5 = "Saturday, April 17";
    int temps[NUMTEMPS];

    cout << "Enter the high for " << city << " on " << day1 << ": ";
    cin >> temps[0];
    cin.ignore(1000,10);
    cout << "Enter the high for " << city << " on " << day2 << ": ";
    cin >> temps[1];
    cin.ignore(1000,10);
    cout << "Enter the high for " << city << " on " << day3 << ": ";
    cin >> temps[2];
    cin.ignore(1000,10);
    cout << "Enter the high for " << city << " on " << day4 << ": ";
    cin >> temps[3];
    cin.ignore(1000,10);
    cout << "Enter the high for " << city << " on " << day5 << ": ";
    cin >> temps[4];
    cin.ignore(1000,10);


    // Calculations
    int lowTemp = temps[0], highTemp = temps[0], countHigh = 0, countLow = 0;
    string highOutput, lowOutput;

    for(int i = 0; i < NUMTEMPS; i++)
    {
        if(highTemp < temps[i]) highTemp = temps[i];
        if(lowTemp > temps[i]) lowTemp = temps[i];
    }

    for(int i = 0; i < NUMTEMPS; i++)
    {
        if(highTemp == temps[i]) countHigh++;
        if(lowTemp == temps[i]) countLow++;
    }

    if(countHigh == 1)
        highOutput = "once";
    else
        highOutput = to_string(countHigh) + " times";
    
    if(countLow == 1)
        lowOutput = "once";
    else
        lowOutput = to_string(countLow) + " times";

    // Outputs
    cout << endl << city << " forecast high temperatures:" << endl;

    cout << day1 << ", " << temps[0] << " degrees Fahrenheit" << endl;
    cout << day2 << ", " << temps[1] << " degrees Fahrenheit" << endl;
    cout << day3 << ", " << temps[2] << " degrees Fahrenheit" << endl;
    cout << day4 << ", " << temps[3] << " degrees Fahrenheit" << endl;
    cout << day5 << ", " << temps[4] << " degrees Fahrenheit" << endl;

    cout << "\nThe high for this week is " << highTemp << " degrees, occurring " << highOutput << endl;
    cout << "The low for this week is " << lowTemp << " degrees, occurring " << lowOutput << endl << endl; 

    cout << endl;
}