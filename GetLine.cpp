//
// Created by Sourjya Biswas on 14/08/25.
//
#include <iostream>
using namespace std;

int main() {
    string name;
    cout<<"Enter your name: ";

    // Taking input from cin stream(standard
    // input stream) and storing it in name
    getline(cin,name);
    cout << "Your name is: " << name << endl;
    return 0;
}