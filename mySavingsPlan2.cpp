// Lab 5.5
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
    cout << "Description: This program calculates the total savings a user will have in a user specified time with user specified interest and deposits" << endl << endl;

    // Inputs
    int years, D;
    double annualInterest;

    cout << "Enter years until retirement: ";
    cin >> years;
    cin.ignore(1000,10);
    cout << "Enter expected annual interest (percentage): ";
    cin >> annualInterest;
    cin.ignore(1000,10);
    cout << "Enter the amount of money that will be deposited monthly: $";
    cin >> D;
    cin.ignore(1000,10);

    // Calculations
    double p = (annualInterest/100)/12; // Monthly interest rate as a decimal
    double T = years * 12; // Number of months
    double S = D * ((pow(1 + p, T) - 1)/p); // From formula given

    // Outputs
    cout << "In " << years << " years with a " << annualInterest << "% annual interest rate, $" << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Round to nearest penny
    cout << S << "." << endl;
}