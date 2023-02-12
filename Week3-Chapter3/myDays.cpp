#include <string>
#include <iostream>
using namespace std;

int main() {
    int yearsAlive = 18, leapYears = 5, birthYearDays = 31 + 29 + 17, dueYearDays = 365 - (31 + 11); // Inputs
    int days = 0; // Outputs

    days = 365 * (yearsAlive); // days from Jan 1, birthYear to Jan 1, dueYear without leap days
    days = days + leapYears; // Leap days (Jan 1 2004-2021)
    days = days - (birthYearDays); // Days from Jan 1, birthYear till birthDay
    days = days - (dueYearDays); // Accoutns for additional year added (2021 is not over yet)

    cout << "Date of Birth: March 17, 2004" << endl;
    cout << "Due Date: February 11, 2021" << endl;
    cout << "Age (by due date): " << days << " days old" << endl;
}