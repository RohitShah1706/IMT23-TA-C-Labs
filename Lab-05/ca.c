/*
[ca]Copying arrays
Write a main function. Declare an array of 10 integers.
Read 5 integers from the user.
Copy these five integers to the second part of the array.
Then print out the resulting array
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        arr[i + 5] = arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}