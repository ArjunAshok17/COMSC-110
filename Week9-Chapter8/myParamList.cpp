// Lab 8.1
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

double calcAverage(int a, int b, int c);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program calculates the average of 3 user inputs using functions" << endl << endl;

    // User Inputs
    int num1, num2, num3;

    cout << "Enter the first whole number: ";
    cin >> num1;
    cin.ignore(1000,10);

    cout << "Enter the second whole number: ";
    cin >> num2;
    cin.ignore(1000,10);

    cout << "Enter the third whole number: ";
    cin >> num3;
    cin.ignore(1000,10);

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2) << "The average is " << calcAverage(num1, num2, num3) << endl;
}

double calcAverage(int a, int b, int c){
    return ((a + b + c)/3.0);
}