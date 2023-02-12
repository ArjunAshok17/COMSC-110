// Lab 6.1
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include <cmath>

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program gives and grades a three-question addition/subtraction quiz to the user" << endl << endl;

    // Variables
    int answer;

    // Inputs + If-Statements + Outputs
    cout << "Three addition and subtraction problems:" << endl << endl;
    
    cout << "1 + 2 = ";
    cin >> answer;
    cin.ignore(1000,10);
    if(answer == 3)
    {
        cout << "Good work -- your answer is correct!" << endl << endl;
    }else
    {
        cout << "Nice job, but a better answer is 3." << endl << endl;
    }

    cout << "100 - 75 = ";
    cin >> answer;
    cin.ignore(1000,10);
    if(answer == 25)
    {
        cout << "Good work -- your answer is correct!" << endl << endl;
    }else
    {
        cout << "Nice job, but a better answer is 25." << endl << endl;
    }

    cout << "37 + 12 = ";
    cin >> answer;
    cin.ignore(1000,10);
    if(answer == 49)
    {
        cout << "Good work -- your answer is correct!" << endl << endl;
    }else
    {
        cout << "Nice job, but a better answer is 49." << endl << endl;
    }
}