#include <iostream>
#include <string>

// Structure definition
struct Employee {
  int id;
  std::string name;
  double salary;
};

int main() {
  // Create an Employee variable and initialize it
  Employee emp1 = {1001, "John Doe", 75000.00};
  
  // Print the stored details
  std::cout << "Employee Details:\n";
  std::cout << "ID: " << emp1.id << "\n";
  std::cout << "Name: " << emp1.name << "\n";
  std::cout << "Salary: " << emp1.salary << "\n";
  
  return 0;
}