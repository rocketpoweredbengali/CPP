//
// Created by Sourjya Biswas on 25/07/25.
//
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << marks << " is not a valid mark." << endl;
    }else if ( marks >= 90 ) {
        cout << "Grade A" << endl;
    }else if ( marks >= 80 ) {
        cout << "Grade B" << endl;
    }else if ( marks >= 70 ) {
        cout << "Grade C" << endl;
    }else if ( marks >= 60 ) {
        cout << "Grade D" << endl;
    }else if ( marks >= 50 ) {
        cout << "Grade E" << endl;
    }else {
        cout << "Fail" << endl;
    }
    return 0;


}