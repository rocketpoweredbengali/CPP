#include <iostream>  // For input and output operations

int main() {
    int originalNum, tempNum, sumOfCubes = 0, digit;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> originalNum;

    // Store the original number in a temporary variable for processing
    tempNum = originalNum;

    // Loop to extract each digit and calculate the sum of cubes of digits
    while (tempNum != 0) {
        digit = tempNum % 10;                     // Get the last digit
        sumOfCubes += (digit * digit * digit);    // Add cube of the digit to the sum
        tempNum = tempNum / 10;                   // Remove the last digit
    }

    // Check if the sum of cubes is equal to the original number
    if (sumOfCubes == originalNum) {
        std::cout << originalNum << " is an Armstrong Number." << std::endl;
    } else {
        std::cout << originalNum << " is not an Armstrong Number." << std::endl;
    }

    return 0; // Indicate successful program termination
}