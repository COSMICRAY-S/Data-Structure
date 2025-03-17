#include <iostream>
#define SIZE 5  // Define the maximum size of the queue

using namespace std;

class Queue {
private:
    int arr[SIZE]; // Array to store queue elements
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Enqueue operation (insert element)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!\n";
            return;
        }
        if (front == -1) front = 0;  // Initialize front on first insert
        arr[++rear] = value;
        cout << value << " enqueued to queue\n";
    }

    // Dequeue operation (remove element)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << arr[front] << " dequeued from queue\n";
        front++;
    }

    // Peek operation (view front element)
    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        return arr[front];
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    cout << "Front element: " << q.peek() << "\n";
    return 0;
}

