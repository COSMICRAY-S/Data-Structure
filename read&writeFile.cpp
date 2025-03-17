#include <iostream>
#include <fstream> // For file operations
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt"); // Open a file for writing
    if (outFile.is_open()) {
        outFile << "Hello, World!\n";
        outFile << "This is a simple file I/O example.\n";
        outFile.close(); // Close the file after writing
        std::cout << "Data written to file successfully.\n";
    } else {
        std::cerr << "Error: Unable to open file for writing.\n";
    }

    // Reading from a file
    std::ifstream inFile("example.txt"); // Open the file for reading
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Reading from file:\n";
        while (std::getline(inFile, line)) { // Read line by line
            std::cout << line << std::endl; // Print each line to the console
        }
        inFile.close(); // Close the file after reading
    } else {
        std::cerr << "Error: Unable to open file for reading.\n";
    }

    return 0;
}

