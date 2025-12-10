#include <iostream>
#include <string>

// Class definition
class Car {
public:
  // Data member
  std::string model = "Sedan";
  
  // Method
  void start_engine() {
    std::cout << model << " engine started! Vroom.\n";
  }
};

int main() {
  // Create an object (instance) of the Car class
  Car myCar; 
  
  // Call the method using the object
  myCar.start_engine();
  
  return 0;
}