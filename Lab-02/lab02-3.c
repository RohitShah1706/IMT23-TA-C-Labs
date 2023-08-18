#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "This is the house that jack built";
    int wordCount = 1;
    int n;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &n);

    if (n < 1 || n > 7) {
        printf("Error: Invalid input. Number should be between 1 and 7.\n");
        return 1; // Exit with an error code
    }

    // Find the starting position of the n-th word
    int startPos = 0;
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            wordCount++;
            if (wordCount == n)
                startPos = i + 1; // Start after the space
        }
        i++;
    }

    // Print the sub-sentence starting at startPos
    for (i = startPos; sentence[i] != '\0'; i++) {
            printf("%c", sentence[i]);
    }
    
    printf("\n");

    return 0; // Exit normally
}

