/*

Write a function to compute factorial. You have already done this using simple recursion.

This time inside the recursive function use a static local integer array a[ ] and a static variable c, to remember the computed  factorials so that you do not need to recompute them.
*/

#include <stdio.h>

int factorial(int n) {
    static int a[100] = {1};  // Initialize array with 1
    static int c = 1;  // Initialize counter with 1
    if (n <= c) {
        return a[n-1];
    } else {
        for (int i = c; i < n; i++) {
            a[i] = a[i-1] * (i+1);
        }
        c = n;
        return a[n-1];
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        printf("Factorial of %d is %d\n", n, factorial(n));
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    return 0;
}