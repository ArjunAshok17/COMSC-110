#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

#include <cmath>

int main() {
    // Input Values
    int years = 49; // Years until my retirement (assuming at 65)
    int D = 20; // Deposit amount per month
    double annualInterest = .042; // 4.2% annual interest rate

    // Calculated Values
    double p = annualInterest/12; // Monthly interest rate
    double T = years * 12; // Number of monthss
    double S = D * ((pow(1 + p, T) - 1)/p); // From formula given

    // Outputs
    cout << "In " << years << " years with a " << annualInterest * 100 << "% annual interest rate, $" << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Round to nearest penny
    cout << S << ".";
}