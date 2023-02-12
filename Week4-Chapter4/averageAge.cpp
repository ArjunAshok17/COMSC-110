#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age1 = 19;
    int age2 = 21;
    int age3 = 30;

    double averageAge = (double(age1) + age2 + age3)/3; // Only one type casting is needed

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2); // Round to 2 decimals as specified
    cout << "The average of the three ages is " << averageAge << ".";
}