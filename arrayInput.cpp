#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> arr;
    std::string input;

    std::cout << "Enter numbers (type 'x' to stop):" << std::endl;

    while (true) {
        std::cin >> input;
                if (input == "x" || input == "X") {
            break;
        }

        try {

            arr.push_back(std::stoi(input));
        } catch (std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a number or 'x' to stop." << std::endl;
        }
    }

    std::cout << "Array elements:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

