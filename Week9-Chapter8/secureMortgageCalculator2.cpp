// Lab 8.4
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Replit.com
// Compiler(s) used: Visual Studio Code w/ MinGW && Replit.com
//

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cctype>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int password();

int main(){
    int run = password(); // Password before accessing program

    if(run == 1) // If password is entered successfully, run the program, else do nothing so no else-statement needed
    {
        // Identification
        cout << "Programmer: Arjun Ashok" << endl;
        cout << "Description: This program is a password protected mortgage calculator with limited attempts" << endl << endl;

        // Mortgage Calculator
            // User inputs
            double p = 0, annualInterest = 0;
            int years = 30;

            cout << "Enter the borrowed amount: $";
            cin >> p;
            cin.ignore(1000,10);
            cout << "Enter the annual interest rate (percentage): ";
            cin >> annualInterest;
            cin.ignore(1000,10);
            
            // Calculations
            double r = (annualInterest/100)/12; // To get monthly interest in decimal form
            int n = years * 12; // To get number of monthly payments

            double monthlyPayment = (p * r * pow((1 + r), n))/(pow((1 + r), n) - 1);

            // Outputs
            cout << endl << "Amount borrowed (user input): $" << p << endl;
            cout << "Annual interest rate (user input): " << annualInterest << "%" << endl;
            cout << "Payback period (programmer input): " << years << " years" << endl;
            
            cout.setf(ios::fixed|ios::showpoint); // Don't want to go beyond pennies (2 decimals)
            cout << setprecision(2);
            cout << "Monthly payment (output): $" << monthlyPayment << endl;
    }
}

int password(){
    string password = "COMSC1105016", attempt; // Setting password

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter the password: ";
        getline(cin, attempt);
        
        if(attempt == password)
        {
            cout << endl << endl;
            return 1;
        }
        else
            cout << "INVALID" << endl;
    }
    cout << "3 Failed Attempts - Program failed" << endl;
    return 0;
}