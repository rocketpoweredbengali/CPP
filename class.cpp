#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name ;
    int roll;

    student (string n, int r){
        name = n;
        roll = r;
    }

    void display(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main(){
    student s1("Sourjya", 1);
    s1.display();

    student s2("Shreyosi", 88);
    s2.display();

    student s3("Shreya", 69);
    s3.display();
    return 0;
}