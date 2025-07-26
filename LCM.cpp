//
// Created by Sourjya Biswas on 26/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int num1, num2, smaller_num, gcd = 1 ;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        smaller_num = num1;
    }else {
        smaller_num = num2;
    }
    for ( int i = 1; i <= smaller_num; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }int calculated_gcd = gcd;
    int lcm = ( num1 * num2 ) / calculated_gcd;
    cout << lcm << " is the LCM" << endl;
    return 0;
}

