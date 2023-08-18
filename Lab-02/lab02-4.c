#include<stdio.h>

int main()
{
    int n;

    // Read the integer n
    printf("Enter an integer n: ");
    scanf("%d", &n);

    // Print the n-triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

	return 0;
}
