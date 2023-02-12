// Lab 6.4
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
    cout << "Description: This program converts Celsius to Fahrenheit with user inputs in a loop" << endl << endl;

    // Variables
    double temperatureC = 0, temperatureF = 0;

    while(true)
    {
        // User Inputs
        cout << "Enter the temperature in Celsius [enter -999 to exit]: ";
        cin >> temperatureC;
        cin.ignore(1000,10);

        // Break with Sentinel
        if(temperatureC == -999)break;

        // Calculations
        temperatureF = (9.0/5) * temperatureC + 32;

        // Outputs
        cout << temperatureC << " Celsius equals ";
    
        cout.setf(ios::fixed|ios::showpoint);
        cout << setprecision(1); // One decimal point specified
        cout << temperatureF << " Fahrenheit" << endl << endl;
    }
}