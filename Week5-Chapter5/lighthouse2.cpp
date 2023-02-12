// Lab 5.2
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include <cmath>

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program calculates the distance a user defined tall lighthouse can be seen from" << endl << endl;

    // User inputs
    double height = 0;
    cout << "Enter the lighthouse height in feet: ";
    cin >> height;
    cin.ignore(1000,10);

    // Calculations
    double distance = sqrt(.8 * height);

    // Outputs
    cout << "A " << height << " foot tall lighthouse can be seen from ";

    cout.setf(ios::fixed); // No showpoint because we want no decimal point
    cout << setprecision(0); // 0 decimal points, rounds to nearest whole number
    cout << distance << " miles away." << endl;
}