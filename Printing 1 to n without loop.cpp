//
// Created by Sourjya Biswas on 07/08/25.
//
#include<iostream>
using namespace std;

void print(int n) {
    if (n>0)
        print(n-1);
        cout << n <<" ";
    }

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    return 0;
}