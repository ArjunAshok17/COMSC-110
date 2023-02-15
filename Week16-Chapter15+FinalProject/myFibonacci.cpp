// Lab 15.2
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Replit.com
// Compiler(s) used: Visual Studio Code w/ MinGW && Replit.com
//

#include <algorithm>
#include <deque> // Collections
#include <fstream> // File IO
#include <iomanip>
#include <iostream> // Console IO
#include <string> // String var

using namespace std;

#include <cctype>
#include <cmath>
#include <ctime> // For time and RNG
#include <cstdlib>

#ifdef _WIN32 // For timing and other OS differences
#include <windows.h>
#else
#include <unistd.h>
#endif

int Fibonacci(int n);

int main()
{
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program takes in user input and gives that numbered term in the Fibonacci sequence" << endl << endl;

    // User Inputs
    int nFibonacci;

    cout << "Enter an index [0 or greater] for the Fibonacci sequence: ";
    cin >> nFibonacci;
    cin.ignore(1000,10);

    cout << "The Fibonacci at index " << nFibonacci << " is " << Fibonacci(nFibonacci) << "." << endl;

    cout << endl << endl;
    system("pause");
}

int Fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}