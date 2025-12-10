#include <iostream>
#include <string>

// Structure definition
struct Candidate {
  int roll_number;
  std::string subject;
  double marks;
};

int main() {
  // Create a Candidate variable
  Candidate c1;
  
  // Store the details
  c1.roll_number = 42;
  c1.subject = "Mathematics";
  c1.marks = 88.5;
  
  // Print the stored details
  std::cout << "Candidate Details:\n";
  std::cout << "Roll No: " << c1.roll_number << "\n";
  std::cout << "Subject: " << c1.subject << "\n";
  std::cout << "Marks: " << c1.marks << "\n";
  
  return 0;
}