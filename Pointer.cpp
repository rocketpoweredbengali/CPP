// Size of pointer in 32 bit system is 4 byte.
// Size of pointer in 64 bit system is 8 byte.

#include <iostream>
using namespace std;
int main() {
    double a = 10;
    double *p = &a; // Pointer to an integer

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: Address of a
    cout << "Value of p: " << p << endl; // Output: Address of a
    cout << "Address of p: " << &p << endl; // Output: Address of pointer p
    cout << "Value pointed by p: " << *p << endl; // Output: 10
    cout << "Size of pointer: " << sizeof(*p) << endl;
    cout << "Size of pointer: " << sizeof(p) << endl;

    return 0;
}