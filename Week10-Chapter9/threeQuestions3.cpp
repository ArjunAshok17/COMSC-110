// Lab 9.1
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

bool question(string q, string answer1, string answer2, int qNum);

int main(){
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program asks and grades a 3 question trivia quiz" << endl << endl;
    
    // Variables
    int score = 0;

    // Function Calls
    if(question("Who invented the first computer", "Alan Turing", "Turing", 1)) score++;
    if(question("What does the fox say", "Nobody knows", "", 2)) score++; // Blank space is an answer here as well
    if(question("Who founded Facebook (first and last name)", "Mark Zuckerburg", "Mark Zuckerburg", 3)) score++; // Only one correct answer

    cout << "That's " << score << " correct out of the 3 questions asked." << endl;
    cout << endl;
}

bool question(string q, string answer1, string answer2, int qNum){
    // If there is only one answer, you can repeat the answer twice in the call
    string response;

    cout << "\n" << qNum << ".  " << q << "? ";
    getline(cin, response);

    if(response == answer1 || response == answer2)
    {
        cout << "Correct!" << endl << endl;
        return true;
    }else
    {
        cout << "Incorrect!" << endl << endl;
        return false;
    }
}