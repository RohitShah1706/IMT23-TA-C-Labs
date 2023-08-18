#include<stdio.h>

int main()
{
    int n;

    // Read the integer number n
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Initialize variables
    int i = 2;
    int isPrime = 1;  // Assume n is prime initially

    // Check for divisibility from 2 to n-1
    while (i < n) {
        if (n % i == 0) {
            isPrime = 0;  // n is not prime
            break;        // No need to continue checking
        }
        i++;
    }

    // Print the result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not a Prime\n");
    }
	return 0;
}
