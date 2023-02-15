// Lab 11.1
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
    cout << "Description: This program outputs the high temperatures for the next 5 days using arrays" << endl << endl;

    // Inputs
    int temps[5] = {66, 70, 70, 72, 77};

    // Outputs
    cout << "San Ramon, California" << " forecast high temperatures:" << endl;

    cout << "Tuesday, April 13, " << temps[0] << " degrees Fahrenheit" << endl;
    cout << "Wednesday, April 14, " << temps[1] << " degrees Fahrenheit" << endl;
    cout << "Thursday, April 15, " << temps[2] << " degrees Fahrenheit" << endl;
    cout << "Friday, April 16, " << temps[3] << " degrees Fahrenheit" << endl;
    cout << "Saturday, April 17, " << temps[4] << " degrees Fahrenheit" << endl;

    cout << "Source: IOS weather app" << endl;
}