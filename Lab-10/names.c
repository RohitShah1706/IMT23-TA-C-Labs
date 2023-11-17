#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declare an array of 20 character pointers
    char *a[20];

    int n = 0;

    while (1) {
        char input[100];
        printf("Enter a string (type 'halt', 'exit', or 'end' to stop): ");
        scanf("%s", input);

        if (strcmp(input, "halt") == 0 || strcmp(input, "exit") == 0 || strcmp(input, "end") == 0) {
            break;
        } else {
            a[n] = (char *)malloc(strlen(input) + 1); // +1 for the null terminator

            strcpy(a[n], input);

            n++;
        }
    }

    // Print all n the names read
    printf("\nNames read:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", a[i]);
    }

    // In a loop, call free to release back to the free pool each pointer stored in each a[i]
    for (int i = 0; i < n; ++i) {
        free(a[i]);
    }

    return 0;
}
