#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch, text[1000];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, specials = 0, total = 0;

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Failed to open file 'test.txt'. Make sure the file exists.\n");
        return 1;
    }
    printf("Read successfully\n");


    // Read character by character and store in array
    while ((ch = fgetc(file)) != EOF && i < 1000) {
        text[i] = ch;
        i++;
    }
    fclose(file);
    total = i;

    printf("Content of the file: ");
    for (int j = 0; j < i; j++) {
        printf("%c", text[j]);
    }
    printf("\n\n");

    // Analyze characters
    for (i = 0; i < total; i++) {
        ch = text[i];
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isspace(ch)) {
            specials++;
        }
    }

    // Output results
    printf("Total characters: %d\n", total);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}


// #include <iostream>
// using namespace std;

// const int MAX_SIZE = 1000;

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; ++i) {
//         for (int j = 0; j < size - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void displayArray(int arr[], int size) {
//     cout << "Sorted Array: ";
//     for (int i = 0; i < size; ++i)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[MAX_SIZE];
//     int size = 0;

//     cout << "Enter your elements : ";

//     // Take input until Enter is pressed
//     while (cin.peek() != '\n') {
//         if (size < MAX_SIZE) {
//             cin >> arr[size++];
//         } else {
//             cout << "Size limit reached!" << endl;
//             break;
//         }
//     }
//     cin.ignore(); // Clear newline from buffer

//     bubbleSort(arr, size);
//     displayArray(arr, size);

//     return 0;
// }


