// Lab 10.8
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
    cout << "Description: This program takes user inputs and outputs the least number of bills required to pay the amount in an XLS file" << endl << endl;

    // User Inputs
    int cashPayment, amountTendered;
    
    cout << "Cash payment amount: $";
    cin >> cashPayment;
    cin.ignore(1000,10);
    
    cout << "Tendered amount: $";
    cin >> amountTendered;
    cin.ignore(1000,10);

    // Calculations
    cout << "Cash payment amount: $" << cashPayment << endl;
    cout << "Tendered amount: $" << amountTendered << endl;

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

    // Console Outputs
    cout << "Change paid out in:" << endl;

    if(hundredThousands != 0)
        cout << "  this many hundred thousand dollar bills: " << hundredThousands << endl;  
    if(tenThousands != 0)
        cout << "  this many ten thousand dollar bills: " << tenThousands << endl;
    if(fiveThousands != 0)
         cout << "  this many five thousand dollar bills: " << fiveThousands << endl;
    if(thousands != 0)
         cout << "  this many thousand dollar bills: " << thousands << endl;
    if(fiveHundreds != 0)
        cout << "  this many five hundred dollar bills: " << fiveHundreds << endl;
    if(hundreds != 0)
         cout << "  this many hundred dollar bills: " << hundreds << endl;   
    if(fifties != 0)
        cout << "  this many fifty dollar bills: " << fifties << endl;
    if(twenties != 0)
        cout << "  this many twenty dollar bills: " << twenties << endl;
    if(tens != 0)
        cout << "  this many ten dollar bills: " << tens << endl;
    if(fives != 0)
        cout << "  this many five dollar bills: " << fives << endl;
    if(twos != 0)
        cout << "  this many two dollar bills: " << twos << endl;   
    if(ones != 0)
        cout << "  this many one dollar bills: " << ones << endl;

    // File Outputs
    ofstream fout;
    fout.open("change.xls");
    if(!fout.good()) throw "I/O Error";

    fout << "Denomination" << '\t' << "Count" << endl;
    if(hundredThousands != 0)
        fout << "100000" << '\t' << hundredThousands << endl;  
    if(tenThousands != 0)
        fout << "10000" << '\t' << tenThousands << endl;  
    if(fiveThousands != 0)
        fout << "5000" << '\t' << fiveThousands << endl;
    if(thousands != 0)
        fout << "1000" << '\t' << thousands << endl;  
    if(fiveHundreds != 0)
        fout << "500" << '\t' << fiveHundreds << endl;
    if(hundreds != 0)
        fout << "100" << '\t' << hundreds << endl;
    if(fifties != 0)
        fout << "50" << '\t' << fifties << endl;  
    if(twenties != 0)
        fout << "20" << '\t' << twenties << endl;  
    if(tens != 0)
        fout << "10" << '\t' << tens << endl;  
    if(fives != 0)
        fout << "5" << '\t' << fives << endl;  
    if(twos != 0)
        fout << "2" << '\t' << twos << endl;
    if(ones != 0)
        fout << "1" << '\t' << ones << endl;
    
    fout.close();

    cout << endl << endl;
}