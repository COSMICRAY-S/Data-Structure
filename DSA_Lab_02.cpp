#include <stdio.h>
#include <windows.h>
void dispalay(int arr[], int n) {
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[1000];
    int n, choice, i, pos, val;

    // Initial input
    printf("Enter number of elements (max 1000): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Menu loop
    do {
        system("cls");
        

        dispalay(arr, n); // Display the array before each operation
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insertion
                if (n >= 1000) {
                    printf("Array is full. Cannot insert more elements.\n");
                    break;
                }
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value to insert: ");
                scanf("%d", &val);
                for (i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                n++;
                printf("Element inserted.\n");
                break;

            case 2: // Deletion
                if (n == 0) {
                    printf("Array is empty. Nothing to delete.\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted.\n");
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
