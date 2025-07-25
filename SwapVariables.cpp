//
// Created by Sourjya Biswas on 16/07/25.
//
#include <iostream>

// The main function is the entry point of the program.
int main() {
    std::cout << "--- Program 3: Swap Two Variables ---" << std::endl;

    // --- Method 1: Using an extra variable (temp) ---
    int x = 10;
    int y = 20;
    std::cout << "\nMethod 1: Using an extra variable" << std::endl;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // Use a third variable 'temp' to hold one value during the swap.
    int temp = x; // Store the value of x in a temporary variable
    x = y;        // Assign the value of y to x
    y = temp;     // Assign the stored original value of x to y

    std::cout << "After swap:  x = " << x << ", y = " << y << std::endl;


    // --- Method 2: Without using an extra variable ---
    int p = 30;
    int q = 40;
    std::cout << "\nMethod 2: Without an extra variable (using arithmetic)" << std::endl;
    std::cout << "Before swap: p = " << p << ", q = " << q << std::endl;

    // This arithmetic approach swaps the values without needing a third variable.
    p = p + q; // p becomes 70 (30 + 40)
    q = p - q; // q becomes 30 (70 - 40)
    p = p - q; // p becomes 40 (70 - 30)

    std::cout << "After swap:  p = " << p << ", q = " << q << std::endl;

    // Indicates that the program executed successfully.
    return 0;
}
