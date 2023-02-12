// Lab 7.3
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
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

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program outputs the least number of bills needed for a user-specified payment in a loop" << endl << endl;

    while(true)
    {
        // User Inputs
        int cashPayment = 0, amountTendered = 0;
        cout << "Cash payment amount [enter 0 to exit]: $";
        cin >> cashPayment;
        cin.ignore(1000,10);
        if(cashPayment <= 0)
        {
            cout << endl;
            break;
        }

        cout << "Tendered amount [enter 0 to exit]: $";
        cin >> amountTendered;
        cin.ignore(1000,10);
        if(amountTendered <= 0)
        {    
            cout << endl;
            break;
        }

        // Calculations
        int changeDue = amountTendered - cashPayment;
        cout << "Change due: $" << changeDue << endl << endl; // Not in output since change due @ output is always zero
        
        int hundredThousands = changeDue / 100000;
        changeDue = changeDue % 100000;

        int tenThousands = changeDue / 10000;
        changeDue = changeDue % 10000;

        int fiveThousands = changeDue / 5000;
        changeDue = changeDue % 5000;

        int thousands = changeDue / 1000;
        changeDue = changeDue % 1000;

        int fiveHundreds = changeDue / 500;
        changeDue = changeDue % 500;

        int hundreds = changeDue / 100;
        changeDue = changeDue % 100;

        int fifties = changeDue / 50;
        changeDue = changeDue % 50;

        int twenties = changeDue / 20;
        changeDue = changeDue % 20;

        int tens = changeDue / 10;
        changeDue = changeDue % 10;

        int fives = changeDue / 5;
        changeDue = changeDue % 5;

        int twos = changeDue / 2;
        changeDue = changeDue % 2;

        int ones = changeDue / 1;
        changeDue = changeDue % 1;

        // Outputs
        cout << "Change paid out in:" << endl;

        if(hundredThousands != 0)
        {
            cout << "  this many hundred thousand dollar bills: " << hundredThousands << endl;
        }  
        if(tenThousands != 0)
        {
            cout << "  this many ten thousand dollar bills: " << tenThousands << endl;
        }
        
        if(fiveThousands != 0)
        {
            cout << "  this many five thousand dollar bills: " << fiveThousands << endl;
        }
        
        if(thousands != 0)
        {
            cout << "  this many thousand dollar bills: " << thousands << endl;
        }
        
        if(fiveHundreds != 0)
        {
            cout << "  this many five hundred dollar bills: " << fiveHundreds << endl;
        }
        
        if(hundreds != 0)
        {
            cout << "  this many hundred dollar bills: " << hundreds << endl;
        }
        
        if(fifties != 0)
        {
            cout << "  this many fifty dollar bills: " << fifties << endl;
        }
        
        if(twenties != 0)
        {
            cout << "  this many twenty dollar bills: " << twenties << endl;
        }
        
        if(tens != 0)
        {
            cout << "  this many ten dollar bills: " << tens << endl;
        }
        
        if(fives != 0)
        {
            cout << "  this many five dollar bills: " << fives << endl;
        }
        
        if(twos != 0)
        {
            cout << "  this many two dollar bills: " << twos << endl;
        }
        
        if(ones != 0)
        {
            cout << "  this many one dollar bills: " << ones << endl;
        }
        cout << endl << endl;
    }
}