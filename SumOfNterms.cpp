//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for ( int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}