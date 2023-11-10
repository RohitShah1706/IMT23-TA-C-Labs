#include <stdio.h>
#include <string.h>

#define MAX_NAMES 20
#define MAX_LENGTH 100

void outoforder(char *a[], int i, int j) {
    char *temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    char *nameptrs[MAX_NAMES];

    // ! Initializing nameptrs[] to point to names[]
    for (int i = 0; i < MAX_NAMES; ++i) {
        nameptrs[i] = names[i];
    }

    int n;
    printf("Enter the value of n (less than 10): ");
    scanf("%d", &n);

    if (n >= 10) {
        printf("Please enter a value less than 10 for n.\n");
        return 1;
    }

    // ! Reading n strings into arrays pointed to by nameptrs[]
    for (int i = 0; i < n; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", nameptrs[i]);
    }

    // ! Sorting nameptrs[] using strcmp() and swapping pointers
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(nameptrs[j], nameptrs[j + 1]) > 0) {
                // Swap pointers in nameptrs[]
                outoforder(nameptrs, j, j + 1);
            }
        }
    }

    // ! Printing strings pointed to by elements of nameptrs[]
    printf("\nSorted names using pointers:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", nameptrs[i]);
    }

    // ! Printing strings from the 2D array names[][]
    printf("\nUnsorted names from 2D array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", names[i]);
    }

    return 0;
}
