//
// Created by Sourjya Biswas on 24/07/25.
//

#include<iostream> // For input and output operations
using namespace std;

int main() {
    int num, r, sum = 0, reverse = 0, count = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Store the original number to compare later for palindrome check
    int p = num;

    // Loop to extract digits and perform operations
    while (num != 0) {
        r = num % 10;              // Extract the last digit
        count = count + 1;         // Increase digit count
        sum = sum + r;             // Add the digit to the sum
        reverse = reverse * 10 + r; // Build the reversed number
        num = num / 10;            // Remove the last digit
    }

    // Output the number of digits
    cout << "Number of digits = " << count << endl;

    // Output the sum of digits
    cout << "Sum of the digits = " << sum << endl;

    // Output the reverse of the number
    cout << "Reverse of the number = " << reverse << endl;

    // Check if the original number is a palindrome
    if (p == reverse)
        cout << "This is a palindrome number";
    else
        cout << "This is not a palindrome number";

    return 0; // Indicate successful program execution
}