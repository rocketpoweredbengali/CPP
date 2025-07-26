//
// Created by Sourjya Biswas on 25/07/25.
//

#include <iostream>  // Include input/output stream library
using namespace std; // Use standard namespace to avoid writing std:: repeatedly

int main() {
    int num1, num2;

    // Ask the user to enter the first number
    cout << "Enter a number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter another number: ";
    cin >> num2;

    // Compare the two numbers and print the result
    if (num1 > num2) {
        // If num1 is greater than num2
        cout << num1 << " is the greater number.";
    }
    else if (num1 == num2) {
        // If both numbers are equal
        cout << "Both numbers are equal.";
    }
    else {
        // If num2 is greater than num1
        cout << num2 << " is greater than " << num1 << endl;
    }

    return 0; // Indicate successful execution
}