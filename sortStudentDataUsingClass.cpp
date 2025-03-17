#include <iostream>
#include <vector>
#include <algorithm> // For sort function

// Define a Student class
class Student {
public:
    std::string name;
    int roll;
    float mark;

    // Constructor to initialize Student objects
    Student(std::string n, int r, float m) : name(n), roll(r), mark(m) {}
};

// Comparator function to sort by marks in descending order
bool compareByMark(const Student& a, const Student& b) {
    return a.mark > b.mark; // For descending order
}

int main() {
    std::vector<Student> students;

    // Input details for 5 students
    //int i=0;
    for (int i = 0; i < 5; ++i) {
        std::string name;
        int roll;
        float mark;

        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Roll: ";
        std::cin >> roll;
        std::cout << "Mark: ";
        std::cin >> mark;

        // Create a Student object and add to the vector
        students.emplace_back(name, roll, mark);
    }

    // Sort students by marks
    std::sort(students.begin(), students.end(), compareByMark);

    // Display sorted student details
    std::cout << "\nSorted list of students by marks (descending order):\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name
                  << ", Roll: " << student.roll
                  << ", Mark: " << student.mark << "\n";
    }

    return 0;
}
