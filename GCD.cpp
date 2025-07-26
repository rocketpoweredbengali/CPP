//
// Created by Sourjya Biswas on 26/07/25.
//

#include <iostream> // For input/output
using namespace std;

int main() {
    int num1, num2, num3, smaller_num, gcd = 1;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the largest of the three numbers to use as the upper limit for GCD check
    if (num1 > num2) {
        smaller_num = num1;
    } else if (num2 > num3) {
        smaller_num = num2;
    } else {
        smaller_num = num3;
    }

    // Loop from 1 to the largest of the three numbers
    // Check which number divides all three inputs — that will be a common divisor
    for (int i = 1; i <= smaller_num; i++) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            gcd = i; // Update gcd whenever a higher common divisor is found
        }
    }

    // Print the final GCD result
    cout << gcd << " is the GCD." << endl;

    return 0; // Indicate successful program execution
}