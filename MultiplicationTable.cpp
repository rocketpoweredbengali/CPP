//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for ( int i; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}