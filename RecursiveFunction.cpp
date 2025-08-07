//
// Created by Sourjya Biswas on 07/08/25.
//
#include<iostream>
using namespace std;
long factorial(long n) {
    if (n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main() {
    long long n, result;
    cout << "Enter a number: ";
    cin >> n;
    result = factorial(n);
    cout << "The factorial of the given number is: " << result << endl;
}