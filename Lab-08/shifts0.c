/*
For this write one function:
void shift0s(int a[], int n);

Its aim is to rearrange the elements so that all zeros occur only in the beginning. Take the idea we developed in class.

Write a main() function as follows:

It reads an integer n and then n integers into an array a[]. assume n is at most 10.
It then print the array with a loop and the format for integers is " %d". It prints a newline at the end.

It then calls sink0s() with the array.

It then prints the array with a loop and the format for each integer is " %d". It prints a newline at the end.

*/

#include <stdio.h>

void shift0s(int a[], int n);

int main()
{
    int a[10];
    int n;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    shift0s(a, n);

    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

void shift0s(int a[], int n)
{
    int i;
    int j;
    int temp;

    // ! shift zeros to beginning
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (j = i; j > 0; j--)
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    
}