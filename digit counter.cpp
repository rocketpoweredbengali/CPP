//
// Created by Sourjya Biswas on 24/07/25.
//

#include<iostream>
using namespace std;

int main() {
    int num, r, sum =0, reverse=0, count = 0;
    cout<<"Enter a number: ";
    cin>>num;
    int p= num;
    while (num !=0) {
        r= num%10;
        count = count +1;
        sum = sum +r;
        reverse = reverse *10 + r;
        num = num/10;
    }
    cout<<"number of digits are = "<<count<<endl;
    cout<<"sum of the digits are = "<<sum<<endl;
    cout<<"reverse of the digits are = "<<reverse<<endl;
    if (p==reverse)
        cout<<"This is a palindrome number";
    else
        cout<<"This is not a palindrome number";
    return 0;
}
