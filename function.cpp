//
// Created by Sourjya Biswas on 24/07/25.
//

#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

// Function to calculate and print the sum of two numbers
void sum(int a, int b) {
    int s = a + b; // Add the two numbers
    cout << s << endl; // Output the result
}

int main() {
    int a, b;

    // Ask the user to input the first number
    cout << "Enter first number: ";
    cin >> a;

    // Ask the user to input the second number
    cout << "Enter second number: ";
    cin >> b;

    // Call the sum function and pass the input numbers
    sum(a, b);

    return 0; // Indicate successful execution
}