#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties or attributes
private:
    double salary;

public:
//non-parameterized constructor
// Teacher(){
//     dept = "Inter Miami";
// }

//parameterized constructor
Teacher(string n, string d, string s, double sal){
    name = n;
    dept = d;
    subject = s;
    salary = sal;
}

    string name;
    string dept;
    string subject;

    // methods or member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
        cout << "dept: " << dept << endl;
    }
};

int main()
{
    Teacher t1("Messi" , "MLS" , "Football" , 100000 ); //constructor call
    t1.getInfo();
    return 0;
}