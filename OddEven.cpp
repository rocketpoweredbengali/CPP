//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0 ) {
        cout << "This is an even number.";
    }else {
        cout << "This is an odd number.";
    }
    return 0;
}