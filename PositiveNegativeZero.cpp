//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The number is zero.";
    }
    else if (num < 0) {
        cout << "This is a negative number.";
    }else {
        cout << "This is a positive number.";
    }
    return 0;
}