#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *p = numbers; // Pointer to the first element of the array

    // Accessing array elements using pointer arithmetic
    printf("Element at index 0: %d\n", *p);   // Output: 1
    printf("Element at index 1: %d\n", *(p + 1)); // Output: 2
    printf("Element at index 2: %d\n", *(p + 2)); // Output: 3

    // Pointer increment and decrement
    p++; // Move to the next element
    printf("After increment, element at index 1: %d\n", *p); // Output: 2

    p--; // Move back to the previous element
    printf("After decrement, element at index 0: %d\n", *p); // Output: 1

    // print elements using pointer arithmetic
    printf("Elements of the array: ");
    int *ptr;
    for(ptr = numbers; ptr < numbers + 5; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    return 0;
}
