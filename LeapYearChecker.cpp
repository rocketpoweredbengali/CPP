//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year for checking: ";
    cin >> year;

    if (year % 400 == 0) {
        cout<<"This is a leap year.";
    }else {
        cout<<"This is not a leap year.";
    }
    return 0;
}