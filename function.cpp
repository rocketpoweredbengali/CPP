//
// Created by Sourjya Biswas on 24/07/25.
//

#include <iostream>
using namespace std;

void sum(int a, int b) {
    int s = a + b;
    cout << s << endl;
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum(a, b);
    return 0;
}