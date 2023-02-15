// Lab 10.5
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
    cout << "Description: This program calculates the monthly mortgage payment with user specified inputs into a file" << endl << endl;

    // User Inputs
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

    // Console Outputs
    cout << endl << "Amount borrowed (user input): $" << p << endl;
    cout << "Annual interest rate (user input): " << annualInterest << "%" << endl;
    cout << "Payback period (programmer input): " << years << " years" << endl;
    
    cout.setf(ios::fixed|ios::showpoint); // Don't want to go beyond pennies (2 decimals)
    cout << setprecision(2);
    cout << "Monthly payment (output): $" << monthlyPayment << endl;

    // File Outputs
    ofstream fout;
    fout.open("mortgage.txt",ios::app); // For multiple runs
    if(!fout.good()) throw "I/O Error";

    fout << "Amount borrowed (user input): $" << p << endl;
    fout << "Annual interest rate (user input): " << annualInterest << "%" << endl;
    fout << "Payback period (programmer input): " << years << " years" << endl;
    
    fout.setf(ios::fixed|ios::showpoint); // Don't want to go beyond pennies (2 decimals)
    fout << setprecision(2);
    fout << "Monthly payment (output): $" << monthlyPayment << endl << endl;

    fout.close();

    cout << endl << endl;
}