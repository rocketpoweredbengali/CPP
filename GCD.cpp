//
// Created by Sourjya Biswas on 26/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, smaller_num, gcd = 1;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        smaller_num = num1;
    }else if (num2 > num3) {
        smaller_num = num2;
    }else {
        smaller_num = num3;
    }
    for ( int i = 1; i <= smaller_num; i++) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            gcd = i;
        }
    }cout << gcd << " is the GCD." << endl;
}