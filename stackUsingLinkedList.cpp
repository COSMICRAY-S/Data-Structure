#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top; // Pointer to top element

public:
    Stack() {
        top = nullptr;
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack\n";
        delete temp;
    }

    // Peek operation
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free memory
    ~Stack() {
        while (top) {
            pop();
        }
    }
};

// Driver code
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl; // 30

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl; // 20

    return 0;
}

