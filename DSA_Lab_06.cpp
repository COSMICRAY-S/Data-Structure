#include <stdio.h>

#define MAX_SIZE 1000

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    printf("Sorted Array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    printf("Enter your elements (press Enter to finish input):\n");

    int ch;
    while (1) {
        if (size < MAX_SIZE && scanf("%d", &arr[size]) == 1) {
            size++;
        } else {
            break;
        }
        ch = getchar();
        if (ch == '\n') {
            break;
        }
    }

    bubbleSort(arr, size);
    displayArray(arr, size);

    return 0;
}
