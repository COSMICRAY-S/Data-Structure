#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    int choice, value;

    // Function to insert at end
    auto insertAtEnd = [&](int val) {
        Node* newNode = new Node{val, nullptr};
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Element inserted.\n";
    };

    // Function to delete by value
    auto deleteByValue = [&](int val) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Element deleted.\n";
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != val) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Element not found.\n";
        } else {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            cout << "Element deleted.\n";
        }
    };

    // Function to display the list
    auto displayList = [&]() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n\n";
    };
    // Menu
    do {
        
        system("CLS");
        displayList();

        cout << "1. Insert Element\n";
        cout << "2. Delete Element by Value\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert(-1 to end): ";
                cin >> value;
                do{
                    insertAtEnd(value);
                    cin>>value;
                }while (value!=-1);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteByValue(value);
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
