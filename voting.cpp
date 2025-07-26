//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age<18) {
        cout << "You are not eligible for voting.";
    }else {
        cout << "Yoi are eligible for voting!";
    }
    return 0;
}