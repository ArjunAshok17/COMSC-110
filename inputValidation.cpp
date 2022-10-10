// Lab 6.2
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
    cout << "Description: This program requires a password to use a mortgage calculator program with programmer inputs" << endl << endl;

    // Password
    string actualPassword = "P@ssw0rd", userPassword = ""; // Programmer defined password
    
    while(userPassword != actualPassword){
        cout << "Enter your password: ";
        getline(cin, userPassword);
    }
    cout << endl << "Correct password!" << endl << endl;

    // Calculations
    int years = 49; // Years until my retirement (assuming at 65)
    int D = 20; // Deposit amount per month
    double annualInterest = .042; // 4.2% annual interest rate

    double p = annualInterest/12; // Monthly interest rate
    double T = years * 12; // Number of monthss
    double S = D * ((pow(1 + p, T) - 1)/p); // From formula given

    // Outputs
    cout << "In " << years << " years with a " << annualInterest * 100 << "% annual interest rate, $" << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Round to nearest penny
    cout << S << "." << endl;
}