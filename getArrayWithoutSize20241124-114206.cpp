#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string input;
    std::vector<int> arr;
    
    // Get input as a single string
    std::getline(std::cin, input);
    
    // Use stringstream to parse the string into individual integers
    std::stringstream ss(input);
    int num;
    
    while (ss >> num) {
        arr.push_back(num);
    }
    
    // Output the elements of the vector
    std::cout << "Array elements: ";
    for (int elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    return 0;
}