// Lab 5.1
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
    cout << "Description: This program calculates monthly mortgage payments by taking in user inputs for borrowed amount and interest rate" << endl << endl;

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