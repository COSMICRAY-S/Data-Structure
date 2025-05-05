#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
    Node* last;
public:
    CircularLinkedList() : last(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!last) {
            last = newNode;
            last->next = last;
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    void display() {
        if (!last) return;
        Node* temp = last->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout << "(back to head)\n";
    }
};

int main() {
    CircularLinkedList cll;
    int values[] = {12, 10, 5, 15, 24};
    for (int val : values)
        cll.insert(val);

    cll.display();
    return 0;
}
