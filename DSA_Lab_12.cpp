#include <stdio.h>
#include<stdlib.h>

int main() {
    int queue[1000];
    int front = -1, rear = -1;
    int choice, value, i;

    do {
        printf("\n=== Queue Menu ===\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Enqueue
                if (rear == 999) {
                    printf("Queue Overflow! Cannot enqueue more elements.\n");
                } else {
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0;
                    rear++;
                    queue[rear] = value;
                    system("CLS");
                    printf("%d Value enqueued.\n",value);
                }
                break;

            case 2: // Dequeue
                if (front == -1 || front > rear) {
                    printf("Queue Underflow! Queue is empty.\n");
                    front = rear = -1; // Reset queue
                } else {
                    system("CLS");
                    printf("Dequeued value: %d\n", queue[front]);
                    front++;
                }
                break;

            case 3: // Display
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    system("CLS");
                    printf("Queue elements (front to rear):\n");
                    for (i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
