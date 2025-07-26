//
// Created by Sourjya Biswas on 26/07/25.
//

#include <iostream> // For input and output
using namespace std;

int main() {
    int num1, num2, smaller_num, gcd = 1;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the larger of the two numbers to use as the upper bound in the loop
    if (num1 > num2) {
        smaller_num = num1;
    } else {
        smaller_num = num2;
    }

    // Loop to find the Greatest Common Divisor (GCD)
    for (int i = 1; i <= smaller_num; i++) {
        // Check if 'i' divides both numbers
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // Update GCD if a common divisor is found
        }
    }

    // Store GCD in a separate variable (optional, for clarity)
    int calculated_gcd = gcd;

    // Calculate Least Common Multiple (LCM) using the formula:
    // LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (num1 * num2) / calculated_gcd;

    // Print the LCM
    cout << lcm << " is the LCM" << endl;

    return 0; // Indicate successful program execution
}