#include <iostream>

class Box {
private:
  int width;
  
public:
  // Explicit Default Constructor (takes no arguments)
  Box() {
    width = 10; // Initialize a default value
    std::cout << "Default Constructor called.\n";
    std::cout << "Box created with default width: " << width << "\n";
  }
  
  int getWidth() const { return width; }
};

int main() {
  // This statement calls the default constructor
  Box b1; 
  
  return 0;
}