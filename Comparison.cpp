//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter a number: "  ;
    cin >> num1;
    cout << "Enter another number: "  ;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is the greater number.";
    }
    else if (num1 == num2) {
        cout << "Both numbers are equal.";
    }else {
        cout << num2 << " is greater than " << num1 << endl;
    }
    return 0;

}