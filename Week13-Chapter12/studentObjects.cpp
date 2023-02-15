// Lab 12.2
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
#include <ctime> // For time and RNG
#include <cstdlib>

#ifdef _WIN32 // For timing and other OS differences
#include <windows.h>
#else
#include <unistd.h>
#endif

struct Student{
    string name, address, city, state, zip;
    char gender;
    string idNum;
    double gpa;
};

Student initStudent(int stuNum);
void outputStudent(Student& x, int stuNum);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program creates a database for student information using structures and user inputs" << endl << endl;

    // Function Calls
        // Initialization
        Student one = initStudent(1);
        Student two = initStudent(2);
        Student three = initStudent(3);

        // Outputs
        outputStudent(one, 1);
        outputStudent(two, 2);
        outputStudent(three, 3);

    cout << endl << endl;
}

Student initStudent(int stuNum){
    Student x;
    cout << "Enter information for Student " << stuNum << endl;

    // User Inputs
    cout << "\t" << "Name: ";
    getline(cin, x.name);
    cout << "\t" << "Address: ";
    getline(cin, x.address);
    cout << "\t" << "City: ";
    getline(cin, x.city);
    cout << "\t" << "State: ";
    getline(cin, x.state);
    cout << "\t" << "Zip: ";
    getline(cin, x.zip);

    cout << "\t" << "Gender [M/F/O]: "; // Male, female, other
    cin >> x.gender;
    cin.ignore(1000,10);
    x.gender = toupper(x.gender);

    cout << "\t" << "ID Number: ";
    getline(cin, x.idNum);

    cout << "\t" << "GPA: ";
    cin >> x.gpa;
    cin.ignore(1000,10);

    cout << endl;

    // Value Returning
    return x;
}

void outputStudent(Student& x, int stuNum){
    cout << "Output for Student " << stuNum << endl;

    // Echo
    cout << "\t" << "Name: " << x.name << endl;
    cout << "\t" << "Address: " << x.address << endl;
    cout << "\t" << "City: " << x.city << endl;
    cout << "\t" << "State: " << x.state << endl;
    cout << "\t" << "Zip: " << x.zip << endl;

    cout << "\t" << "Gender [M/F/O]: " << x.gender << endl; // Male, female, other

    cout << "\t" << "ID Number: " << x.idNum << endl;

    cout << "\t" << "GPA: " << x.gpa << endl;

    cout << endl;
}