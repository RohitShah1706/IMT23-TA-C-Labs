/*
[sp]Store primes
Write a main function. Declare an array of 10 integers.
Find the first 10 primes (you have already done some kind of prime finding in an earlier exercise)
and store those 10 primes in the array.
Now print the elements of the array.
*/

#include <stdio.h>

int is_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int arr[10];
    int i;
    int n = 2;
    int count = 0;
    while (count < 10)
    {
        if (is_prime(n))
        {
            arr[count] = n;
            count++;
        }
        n++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}