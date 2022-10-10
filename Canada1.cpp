// Lab 5.4
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
    cout << "Description: This program converts the user specified temperature from Celsius to Fahrenheit" << endl << endl;

    // User Inputs
    double temperatureC = 0;
    cout << "Enter the temperature in Celsius: ";
    cin >> temperatureC;
    cin.ignore(1000,10);

    // Calculations
    double temperatureF = (9.0/5) * temperatureC + 32;

    // Outputs
    cout << temperatureC << " Celsius equals ";
    
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(1); // One decimal point specified
    cout << temperatureF << " Fahrenheit" << endl;
}