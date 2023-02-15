// Lab 10.4
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
    cout << "Description: This program calculates the distance a lighthouse can be seen from with file specified inputs" << endl << endl;

    // File Inputs
    ifstream fin;
    fin.open("lighthouse.txt");
    if(!fin.good()) throw "I/O Error";

    double height;
    fin >> height;
    fin.ignore(1000,10);

    fin.close();

    // Calculations
    double distance = sqrt(.8 * height);

    // Outputs
    cout << "A " << height << " foot tall lighthouse can be seen from ";

    cout.setf(ios::fixed); // No showpoint because we want no decimal point
    cout << setprecision(0); // 0 decimal points, rounds to nearest whole number
    cout << distance << " miles away." << endl;

    cout << endl << endl;
}