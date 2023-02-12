// Lab 9.5
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

int weeksUntilRich(double final, float start);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program calculates the weeks until you reach a set amount of wealth with an allowance that doubles every week" << endl << endl;
    
    // Function Calls
    cout << "In " << weeksUntilRich(1000,.05) << " weeks, I will be a a thousandaire" << endl;
    cout << "In " << weeksUntilRich(1000000,.05) << " weeks, I will be a millionaire" << endl;
    cout << "In " << weeksUntilRich(1000000000,.05) << " weeks, I will be a billionaire" << endl;

    cout << endl;
}

int weeksUntilRich(double final, float start){
    long double wealth = 0;
    int weeks;
    for(weeks = 0; wealth <= final; weeks++)
    {
        wealth += start * pow(2,weeks);
    }
    return weeks;
}
