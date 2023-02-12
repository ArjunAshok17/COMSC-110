// Lab 5.6
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
    cout << "Description: This program aims to collect user input and echo it to demonstrate cin.ignore and getline" << endl << endl;

    // Inputs
    int age = 0;
    string name = "";
    double temp = 0;
    string city = "";

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(1000,10); // Using strings in the program
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter the current outside temperature (degrees Fahrenheit): ";
    cin >> temp;
    cin.ignore(1000,10); // Using strings in the program
    cout << "Enter the city you are in right now: ";
    getline(cin, city);

    // Outputs
    cout << endl << name << " is " << age << " years old." << endl;
    cout << "It's " << temp << " degrees Fahrenheit in " << city << "." << endl;
}