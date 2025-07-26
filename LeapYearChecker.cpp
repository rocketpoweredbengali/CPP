//
// Created by Sourjya Biswas on 25/07/25.
//

#include <iostream> // For input and output
using namespace std;

int main() {
    int year;

    // Prompt the user to enter a year
    cout << "Enter a year for checking: ";
    cin >> year;

    /*
      A year is a leap year if:
      - It is divisible by 4 AND
          - Not divisible by 100 OR divisible by 400
    */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "This is a leap year." << endl;
    } else {
        cout << "This is not a leap year." << endl;
    }

    return 0; // Indicate successful program execution
}