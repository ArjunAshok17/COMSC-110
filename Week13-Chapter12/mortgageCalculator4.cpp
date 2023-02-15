// Lab 12.1
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

struct Mortgage{
    double p;
    double annualInterest;
    double r;
    int n;
    double monthlyPayment;
};

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program calculates the monthly mortgage payment with user specified inputs into a file using structures" << endl << endl;

    // User Inputs
    Mortgage demo; // Initialize structure variable

    const int YEARS = 30;

    cout << "Enter the borrowed amount: $";
    cin >> demo.p;
    cin.ignore(1000,10);
    cout << "Enter the annual interest rate (percentage): ";
    cin >> demo.annualInterest;
    cin.ignore(1000,10);
    
    // Calculations
    demo.r = (demo.annualInterest/100)/12; // To get monthly interest in decimal form
    demo.n = YEARS * 12; // To get number of monthly payments

    demo.monthlyPayment = (demo.p * demo.r * pow((1 + demo.r), demo.n))/(pow((1 + demo.r), demo.n) - 1);

    // Console Outputs
    cout << endl << "Amount borrowed (user input): $" << demo.p << endl;
    cout << "Annual interest rate (user input): " << demo.annualInterest << "%" << endl;
    cout << "Payback period (programmer input): " << YEARS << " years" << endl;
    
    cout.setf(ios::fixed|ios::showpoint); // Don't want to go beyond pennies (2 decimals)
    cout << setprecision(2);
    cout << "Monthly payment (output): $" << demo.monthlyPayment << endl;

    // File Outputs
    ofstream fout;
    fout.open("mortgage.txt",ios::app); // For multiple runs
    if(!fout.good()) throw "I/O Error";

    fout << "Amount borrowed (user input): $" << demo.p << endl;
    fout << "Annual interest rate (user input): " << demo.annualInterest << "%" << endl;
    fout << "Payback period (programmer input): " << YEARS << " years" << endl;
    
    fout.setf(ios::fixed|ios::showpoint); // Don't want to go beyond pennies (2 decimals)
    fout << setprecision(2);
    fout << "Monthly payment (output): $" << demo.monthlyPayment << endl << endl;

    fout.close();

    cout << endl << endl;
}