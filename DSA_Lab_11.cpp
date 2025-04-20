#include <stdio.h>
#include <stdlib.h>
int main() {
    int stack[1000];  // Stack array
    int top = -1;     // Empty stack
    int choice, value, i;

    do {
        printf("\n=== Stack Menu ===\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                if (top >= 999) {
                    printf("Stack Overflow! Cannot push more elements.\n");
                } else {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    system("CLS");
                    printf("%d pushed into stack.\n",value);
                }
                break;

            case 2: // Pop
                if (top == -1) {
                    printf("Stack Underflow! Stack is empty.\n");
                } else {
                    system("CLS");
                    printf("Popped value: %d\n", stack[top]);
                    top--;
                }
                break;

            case 3: // Display
                if (top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    system("CLS");
                    printf("Stack elements (top to bottom):\n");
                    for (i = top; i >= 0; i--) {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
            system("CLS");
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
