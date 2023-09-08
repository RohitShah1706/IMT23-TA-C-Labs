/*
[rw] Reading and Writing arrays 
Write a main function. Declare an array of 10 integers.
Read 5 integers from the user.
Then add 1 to the even index positions and subtract one from the odd index positions.
Then print out the resulting array elements.
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
        if (i % 2 == 0)
        {
            arr[i] += 1;
        }
        else
        {
            arr[i] -= 1;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}