/*
Write recursive functions to compute each of the following functions on an integer n:

s (n )= s(n-1) + 1, for n > 0;   base case t(0)=0;
b ( n ) = b(n/2) + 1, for n > 1;   base case t(0)=1 and t(1)=1; assuming integer division
m (n ) = 2*m(n/2) + n, for n>1; base case t(0)=1 and t(1)=1; assuming integer division
p (n ) = p(n/2) + p ( ceil(n/2) ) + n, for n > 1; base case t(0)=1 and t(1)=1
Note: n/2 is as good as the floor function. ceil(n/2) is the ceiling function (rounded up to the nearest integer greater than or equal to the real value given, but make sure you do real number division!) It is part of the math library so include math.h and also compile like gcc recurse.c -lm   (notice the -lm in the end).

Write a main() function to repeatedly read an integer n and then
if n is negative, it halts. otherswize
it computes and prints the values of s ( n ), b ( n ), m ( n) and p ( n)
*/

#include <stdio.h>
#include <math.h>

int s(int n);
int b(int n);
int m(int n);
int p(int n);

int main()
{
    int n;
    
    while (1) {
        scanf("%d", &n);
        
        if (n < 0) {
            break; // Exit the loop if n is negative
        }
        
        int result_s = s(n);
        int result_b = b(n);
        int result_m = m(n);
        int result_p = p(n);
        
        // printf("s(%d) = %d\n", n, result_s);
        // printf("b(%d) = %d\n", n, result_b);
        // printf("m(%d) = %d\n", n, result_m);
        // printf("p(%d) = %d\n", n, result_p);
        printf("%d %d %d %d\n", result_s, result_b, result_m, result_p);
    }
    
    return 0;
}

// Function to compute s(n)
int s(int n) {
    if (n == 0) {
        return 0; // Base case
    } else if (n > 0) {
        return s(n - 1) + 1; // Recursive case
    } else {
        return -1; // Handle negative values (optional)
    }
}

// Function to compute b(n)
int b(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base cases
    } else if (n > 1) {
        return b(n / 2) + 1; // Recursive case
    } else {
        return -1; // Handle negative values (optional)
    }
}

// Function to compute m(n)
int m(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base cases
    } else if (n > 1) {
        return 2 * m(n / 2) + n; // Recursive case
    } else {
        return -1; // Handle negative values (optional)
    }
}

// Function to compute p(n)
int p(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base cases
    } else if (n > 1) {
        return p(n / 2) + p(ceil((double)n / 2)) + n; // Recursive case with ceil function
    } else {
        return -1; // Handle negative values (optional)
    }
}
