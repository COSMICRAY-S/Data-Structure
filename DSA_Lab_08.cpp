#include <stdio.h>

#define MAX 1000

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] < temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void displayArray(int arr[], int size) {
    printf("Sorted Array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX], size = 0;

    printf("Enter your elements (press Enter to finish input):\n");

    int ch;
    while (1) {
        if (size < MAX && scanf("%d", &arr[size]) == 1) {
            size++;
        } else {
            break;
        }
        ch = getchar();
        if (ch == '\n') {
            break;
        }
    }

    insertionSort(arr, size);
    displayArray(arr, size);

    return 0;
}
