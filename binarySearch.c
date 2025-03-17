#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids potential overflow

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    // Target not found
    return -1;
}

// Function to print the result
void printResult(int result) {
    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Performing Binary Search...\n");
    int result = binarySearch(arr, size, target);
    printResult(result);

    return 0;
}

