// Lab 8.2
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

void additionProblem(int a, int b);

int main(){
    srand(time(0));

    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program generates 5 addition problems for the user to solve and grades them" << endl << endl;

    // Loop
    for(int i = 0; i < 5; i++)
    {
        additionProblem(rand() % 11, rand() % 11);
    }
}

void additionProblem(int a, int b){
    int userAnswer, answer = a + b;

    cout << "\n" << a << " + " << b << " = ";
    cin >> userAnswer;
    cin.ignore(1000,10);

    if(userAnswer == answer)
        cout << "Correct!" << endl;
    else
        cout << "Nice try, but a better answer is " << answer << endl;
}