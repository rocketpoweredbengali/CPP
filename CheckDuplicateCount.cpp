#include <iostream>
#include <vector>
#include <map>

int main() {
  // Example array (vector)
  std::vector<int> arr = {10, 20, 10, 30, 40, 20, 10};
  std::map<int, int> counts; 
  int duplicate_items_count = 0;
  
  // Count frequency of each element
  for (int x : arr) {
    counts[x]++;
  }
  
  // Check how many unique items are duplicates (count > 1)
  for (auto const& pair : counts) {
    if (pair.second > 1) {
      duplicate_items_count++;
    }
  }
  
  std::cout << "Total distinct duplicate items found: " << duplicate_items_count << std::endl;
  
  // For this example (10 and 20 are duplicates), output is 2.
  return 0;
}