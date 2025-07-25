//
// Created by Sourjya Biswas on 17/07/25.
//
#include <iostream> // Required for input (cin) and output (cout)

int main() {
    double num1, num2; // Declare two variables to store the numbers (using double for potential decimals)
    char operation;     // Declare a variable to store the operation (+, -, *, /)

    // Prompt the user to enter the first number
    std::cout << "Enter first number: ";
    std::cin >> num1; // Read the first number from the user

    // Prompt the user to enter the operation
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation; // Read the operator from the user

    // Prompt the user to enter the second number
    std::cout << "Enter second number: ";
    std::cin >> num2; // Read the second number from the user

    double result; // Declare a variable to store the result of the calculation

    // Use a switch statement to perform the appropriate operation based on user input
    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
            break; // Exit the switch statement

        case '-':
            result = num1 - num2;
            std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
            break;

        case '*':
            result = num1 * num2;
            std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
            break;

        case '/':
            // Handle division by zero case
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            }
            break;

        default:
            // Handle invalid operator input
            std::cout << "Error! Invalid operator." << std::endl;
            break;
    }

    return 0; // Indicate successful program execution
}