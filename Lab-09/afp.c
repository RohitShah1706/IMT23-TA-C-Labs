#include <stdio.h>
#include <string.h>

// Function to swap c[i] and c[j]
void swap(char *c, int i, int j) {
    char temp = c[i];
    c[i] = c[j];
    c[j] = temp;
}

// Function to reverse the string using swap
void reverse(char *c) {
    int length = strlen(c);
    for (int i = 0; i < length / 2; ++i) {
        swap(c, i, length - i - 1);
    }
}

int main() {
    char x[20];

    while (1) {
        // Read a string into x[] from the user
        printf("Enter a string (type 'end', 'finish', 'done', or 'halt' to exit): ");
        scanf("%s", x);

        // Check if the user wants to exit
        if (strcmp(x, "end") == 0 || strcmp(x, "finish") == 0 || strcmp(x, "done") == 0 || strcmp(x, "halt") == 0) {
            printf("Exiting the program.\n");
            break;
        }

        // Call the reverse() function to reverse the contents of the string in x[]
        reverse(x);

        // Print the reversed string
        printf("Reversed string: %s\n", x);
    }

    return 0;
}
