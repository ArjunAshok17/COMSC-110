#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

#include <cmath>

int main() {
    int height = 145; // Input

    double distance = sqrt(.8 * height); // From formula given

    cout << "A " << height << " foot tall lighthouse can be seen from ";

    cout.setf(ios::fixed); // No showpoint because we want no decimal point
    cout << setprecision(0); // 0 decimal points, rounds to nearest whole number
    cout << distance << " miles away.";
}