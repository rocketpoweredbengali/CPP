#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator> // Required for std::begin/std::end if not using vector

int main() {
  // Example array (sorted)
  std::vector<int> sorted_arr = {1, 3, 5, 7, 9};
  // Example array (not sorted)
  std::vector<int> unsorted_arr = {1, 5, 3, 9, 7};
  
  // Check the first array
  bool is_sorted = std::is_sorted(sorted_arr.begin(), sorted_arr.end());
  std::cout << "Array 1 is " << (is_sorted ? "Sorted" : "Not Sorted") << std::endl;
  
  // Check the second array
  is_sorted = std::is_sorted(unsorted_arr.begin(), unsorted_arr.end());
  std::cout << "Array 2 is " << (is_sorted ? "Sorted" : "Not Sorted") << std::endl;
  
  return 0;
}