//
// Created by Sourjya Biswas on 07/08/25.
//
#include<iostream>
using namespace std;
int factorial(int n) {
    if (n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = factorial(n);
    cout << "The factorial of the given number is: " << result << endl;
}