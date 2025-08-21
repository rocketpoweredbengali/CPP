#include<iostream>
using namespace std;    
int main(){
    int a = 10;
    int *p = &a; 
    int **p1 = &p; 
    cout << "Value of pointer p1: " << **p1 << endl; 
    cout << "Value of pointer p: " << *p << endl; 
    cout << "Value of p : " << p << endl; 
    cout << "Address of pointer p1: " << &p1 << endl; 
    cout << "Address of pointer p: " << &p << endl; 
    cout << "Address of a: " << &a << endl; 
}