#include<iostream>
#define MAX_SIZE 1000

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min =i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp =arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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

    selectionSort(arr, size);
    displayArray(arr, size);

    return 0;
}
