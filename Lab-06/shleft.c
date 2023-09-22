/*
[shleft] Write only a main() function. Declare an array to hold 20 integers. Read a number  n  and then read  n  integers into the array. Now shift(move) each element to one index position earlier. The empty slot is filled by the number -1. Print the resulting array. For example if n was 4, and the integers read into the array were 10, 20,30, 40. Then after doing the required shift, the first four elements of the array will be 20, 30, 40, -1. Which is what will be printed out.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[20];
    int i;

    printf("Enter the number of integers to read: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = -1;

    printf("Resulting array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}