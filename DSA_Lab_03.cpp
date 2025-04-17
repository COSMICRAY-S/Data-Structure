#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[1000];
    int n, i, search, count = 0;

    // Seed random number generator
    srand(time(0));

    // Take input for number of elements
    printf("Enter number of elements to generate (max 1000): ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Generate and display array
    printf("Generated array:\n");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Random number between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");


    // Input element to search
    printf("Enter value to search: ");
    scanf("%d", &search);

    // Search and print positions
    printf("Searching for %d...\n", search);
    printf("Found at position: ");
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d, ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("\nElement not found in the array.\n");
    } else {
        printf("\nTotal occurrences: %d\n", count);
    }

    return 0;
}
