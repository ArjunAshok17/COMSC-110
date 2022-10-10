#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

#include <cmath>

int main() {
    int p = 1500000; // Borrowed amount
    double annualInterest = .0478; // 4.78 percent interest rate
    double r = annualInterest/12; // Converted to monthly interest for monthly payments
    int years = 30; // Payback period in years
    int n = years * 12; // Number of months in payback period

    double monthlyPayment = (p * r * pow((1 + r), n))/(pow((1 + r), n) - 1);

    cout << "Amount borrowed (programmer input) = $" << p << endl;
    cout << "Annual interest rate (programmer input) = " << 100 * annualInterest << "%" << endl;
    cout << "Payback period (programmer input) = " << years << " years" << endl;

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Only two decimals
    cout << "Monthly payment (calculated output) = $" << monthlyPayment << endl;
}