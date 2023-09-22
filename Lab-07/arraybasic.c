/*
Write a function with prototype  void reader(int a[ ], int n);  to receive an array and an integer as parameters and read that many integers into that array.
Write a function with prototype  int sum(int a[ ], int n);   to receive an array and an  integer as parameters and sum those integers in the array and return the sum.
[LATE ADDITION]: Write a function with prototype void rotate(int a[ ], int n);  to move all items one place to the right except for the last one (at index n-1) which moves to index 0.
Write a main() function combining the above two to read an array, compute the sum and print the sum value. Then it calls the rotate function to rotate the integers in the array and print the elements of the array to see how it looks after rotatation.
*/
#include <stdio.h>

void reader(int a[ ], int n);
int sum(int a[ ], int n);
void rotate(int a[ ], int n);

int main()
{
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    reader(a, n);
    printf("Sum of the elements: %d\n", sum(a, n));
    rotate(a, n);
    return 0;
}

void reader(int a[ ], int n)
{
    int i;
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int sum(int a[ ], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

void rotate(int a[ ], int n)
{
    int i, temp;
    temp = a[n-1];
    for(i = n-1; i > 0; i--)
        a[i] = a[i-1];
    a[0] = temp;
    printf("After rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
