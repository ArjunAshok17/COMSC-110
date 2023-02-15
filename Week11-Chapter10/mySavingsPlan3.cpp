// Lab 10.2
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
    cout << "Description: This program calculates total savings with file specified inputs" << endl << endl;

    // File Inputs
    ifstream fin;
    fin.open("savings.txt");
    if(!fin.good()) throw "I/O Error";

    int years, D;
    double annualInterest;

    fin >> years;
    fin.ignore(1000,10);
    fin >> annualInterest;
    fin.ignore(1000,10);
    fin >> D;
    fin.ignore(1000,10);

    fin.close();

    // Calculations
    double p = (annualInterest/100)/12; // Monthly interest rate as a decimal
    double T = years * 12; // Number of months
    double S = D * ((pow(1 + p, T) - 1)/p); // From formula given

    // Outputs
    cout << "In " << years << " years with a " << annualInterest << "% annual interest rate, $" << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Round to nearest penny
    cout << S << "." << endl;

    cout << endl << endl;
}