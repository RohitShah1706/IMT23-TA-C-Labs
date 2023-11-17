#include <stdio.h>
#include <stdlib.h>

// Function to print an array of n integers
void print_array(int a[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Function to create a new array of n integers and read them from the user
int* new_array(int n) {
    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

// Function to delete the array using free()
void delete_array(int* arr) {
    free(arr);
}

int main() {
    // Read an integer n
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Get a new array of n integers from the user by calling new_array()
    int* array = new_array(n);

    // Print the array using print_array()
    print_array(array, n);

    // Deallocate the array by calling delete_array()
    delete_array(array);

    return 0;
}
