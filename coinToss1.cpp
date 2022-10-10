// Lab 6.5
// Programmer: Arjun Ashok
// Editor(s) used: Visual Studio Code && Repl.it
// Compiler(s) used: Visual Studio Code w/ MinGW && Repl.it
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include <cmath>
#include <ctime>
#include <cstdlib>

int main(){
    srand(time(0)); // For random number generation (not the same random numbers every time the program is run)
    
    // Identification
    cout << "Programmer: Arjun Ashok" << endl;
    cout << "Description: This program randomly flips a coin" << endl << endl;

    // Calculations
    int toss = 1 + (rand() % 10);

    // Outputs
    if(toss <= 5){
        cout << "Tails" << endl;
    }else{
        cout << "Heads" << endl;
    }
}