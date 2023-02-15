// Lab 11.4
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
    cout << "Description: This program takes the average of 4 user numbers and counts how many are greater than the average" << endl << endl;

    // User Inputs
    const int SIZE = 4; 
    int sum = 0, numAbove = 0;
    int nums[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number: ";
        cin >> nums[i];
        cin.ignore(1000,10);

        sum += nums[i];
    }

    // Calculations
    double avg = double(sum)/SIZE;

    for(int i = 0; i < SIZE; i++)
    {
        if(nums[i] > avg) numAbove++;
    }

    // Outputs
    cout << "The average of the " << SIZE << " numbers is " << avg << endl;
    cout << numAbove << " numbers are higher than the average" << endl << endl;
}