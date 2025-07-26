#include <iostream>

int main() {
    int originalNum, tempNum, sumOfCubes = 0, digit;

    std::cout << "Enter a number: ";
    std::cin >> originalNum;

    tempNum = originalNum;
    while (tempNum != 0) {
        digit = tempNum % 10;

        sumOfCubes += (digit * digit * digit);

        tempNum = tempNum / 10;
    }

    if (sumOfCubes == originalNum) {
        std::cout << originalNum << " is an Armstrong Number." << std::endl;
    } else {
        std::cout << originalNum << " is not an Armstrong Number." << std::endl;
    }

    return 0;
}