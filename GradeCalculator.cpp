//
// Created by Sourjya Biswas on 25/07/25.
//

#include <iostream> // Include input/output stream
using namespace std;

int main() {
    int marks;

    // Ask the user to enter their marks
    cout << "Enter marks: ";
    cin >> marks;

    // Check if the entered marks are within a valid range (0 to 100)
    if (marks < 0 || marks > 100) {
        cout << marks << " is not a valid mark." << endl;
    }
    // Check for Grade A (90 and above)
    else if (marks >= 90) {
        cout << "Grade A" << endl;
    }
    // Check for Grade B (80 to 89)
    else if (marks >= 80) {
        cout << "Grade B" << endl;
    }
    // Check for Grade C (70 to 79)
    else if (marks >= 70) {
        cout << "Grade C" << endl;
    }
    // Check for Grade D (60 to 69)
    else if (marks >= 60) {
        cout << "Grade D" << endl;
    }
    // Check for Grade E (50 to 59)
    else if (marks >= 50) {
        cout << "Grade E" << endl;
    }
    // Marks below 50 result in a fail
    else {
        cout << "Fail" << endl;
    }

    return 0; // Indicate successful execution
}