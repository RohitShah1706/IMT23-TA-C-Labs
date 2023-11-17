#include <stdio.h>

// Function to print the elements of an array
void printArray(void *arr, size_t elemSize, size_t arrSize) {
    for (size_t i = 0; i < arrSize; ++i) {
        // Calculate the offset for each element in the array
        void *currentElem = (char *)arr + i * elemSize;

        // Prsize_t the value based on the provided element size
        if (elemSize == sizeof(int)) {
            printf("%d ", *(int *)currentElem);
        } else if (elemSize == sizeof(double)) {
            printf("%.2f ", *(double *)currentElem);
        } else {
            // Handle other data types as needed
            printf("Unsupported data type\n");
            return;
        }
    }
    printf("\n");
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("Printing intArray: ");
    printArray(intArray, sizeof(int), sizeof(intArray) / sizeof(int));

    printf("Printing doubleArray: ");
    printArray(doubleArray, sizeof(double), sizeof(doubleArray) / sizeof(double));

    return 0;
}
