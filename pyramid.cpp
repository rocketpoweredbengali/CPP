//
// Created by Sourjya Biswas on 24/07/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of the diamond): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
            cout<< " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
            cout<< " ";
        }
        cout << endl;
    }

    return 0;
}