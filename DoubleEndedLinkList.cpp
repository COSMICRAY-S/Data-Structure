#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtTail(Node*& head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    Node* newNode = new Node(val);
    temp->next = newNode;
    newNode->prev = temp;
}

// ✅ New function to insert at any position (1-based)
void insertAtPosition(Node*& head, int pos, int val) {
    if (pos <= 0) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (temp != NULL && cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds\n";
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void deleteAtHead(Node*& head) {
    if (head == NULL) return;

    Node* toDelete = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete toDelete;
}

void deletion(Node*& head, int pos) {
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (temp != NULL && cnt != pos) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) return;

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    insertAtHead(head, 9);
    display(head);

    insertAtPosition(head, 3, 99);  // Insert 99 at position 3
    display(head);

    deletion(head, 3);              // Delete at position 3
    display(head);

    deleteAtHead(head);            // Delete head
    display(head);

    return 0;
}
