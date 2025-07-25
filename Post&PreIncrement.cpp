//
// Created by Sourjya Biswas on 16/07/25.
//
#include <iostream>


int main() {
    std::cout << "--- Program 2: Increment Operators ---" << std::endl;

    int a = 5;
    int b = 5;


    std::cout << "Initial value of a: " << a << std::endl;
    int post_result = a++;
    std::cout << "Result of post_result = a++: " << post_result << std::endl;
    std::cout << "Value of a after post-increment: " << a << std::endl;
    std::cout << std::endl;


    std::cout << "Initial value of b: " << b << std::endl;
    int pre_result = ++b;
    std::cout << "Result of pre_result = ++b: " << pre_result << std::endl;
    std::cout << "Value of b after pre-increment: " << b << std::endl;


    return 0;
}