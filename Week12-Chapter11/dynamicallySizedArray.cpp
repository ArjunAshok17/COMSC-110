// Lab 11.5
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
    cout << "Description: This program takes a user specified amount of numbers and outputs certain characteristics of the set of numbers" << endl << endl;

    // User Inputs
    int size, sum = 0, numAbove = 0;

    cout << "How many scores? ";
    cin >> size;
    cin.ignore(1000,10);

    int* nums = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> nums[i];
        cin.ignore(1000,10);

        sum += nums[i];
    }

    // Calculations
    double avg = double(sum)/size;
    bool gradeA = false;

    // Sorting
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(nums[i] > nums[j])
            {
                int swap = nums[i];
                nums[i] = nums[j];
                nums[j] = swap;
            }
        }
    }

    int min = nums[0], max = nums[size - 1];

    // Outputs
    cout << "Sorted: ";
    for(int i = 0; i < size; i++)
    {
        cout << to_string(nums[i]) + " ";
        if(nums[i] >= 90) gradeA = true; // For checking A grades
    }
    cout << endl << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << avg << endl;
    if(gradeA)
        cout << "At least one 'A' grade was entered" << endl;
    else
        cout << "No 'A' grades were entered" << endl;
    cout << endl;
}