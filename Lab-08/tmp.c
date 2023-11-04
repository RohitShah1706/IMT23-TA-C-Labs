#include<stdio.h>
#include<string.h>

int main()
{
    // declare array of size 10 and use memset to set all elements to -1
    int arr[10];
    memset(arr, -1, sizeof(arr));

    // print all elements of array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}