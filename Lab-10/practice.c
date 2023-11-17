#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to print an array of strings
void print_array(char* a[], int n) {
    printf("Array elements:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", a[i]);
    }
}

// Function to create a new array of strings and read them from the user
char** new_array(int n) {
    char** arr = (char**)malloc(n * sizeof(char*));

    // Read strings into the array
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; ++i) {
        char input[100];
        scanf("%s", input);

        // Allocate memory for the string and copy it
        arr[i] = (char*)malloc((strlen(input) + 1) * sizeof(char));
        strcpy(arr[i], input);
    }

    return arr;
}

// Function to delete the array and free each string
void delete_array(char** arr, int n) {
    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    // Read an integer n
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Get a new array of strings from the user by calling new_array()
    char** array = new_array(n);

    // Print the array using print_array()
    print_array(array, n);

    // Deallocate the array and free each string by calling delete_array()
    delete_array(array, n);

    return 0;
}
