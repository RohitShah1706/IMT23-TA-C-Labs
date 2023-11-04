/*
functions to write:

void insert(int a[], int n, int val, int pos);


Inserts val into position pos in the array a[ ], effectively shifting all elements from a[pos] to a[n-1] right by one.
if pos is n it will add to the end of the array
if pos is not in the range 0 .. n, it will do nothing.

int delete(int a[], int n, int pos);

It move all the elements a[pos+1] to a[n-1] left by one position, effectively deleting a[pos]
Its return value is the element that was deleted from a[pos].

if pos is n-1 nothing needs to be moved.
If n is 0 (array is empty) or pos is outside the range 0.. n-1 it returns 0 and prints an error message("Bad delete\n").

int find_min_pos(int a[], int n);

It returns the position of the minimum value element in the array a[] among the range 0..n-1;
If n is zero it returns -1.

Write a main() as follows:

Define an array x of size 20 integers.
Read an integer n.

In a loop repeatedly do for n times:

read an integer value v.
read a position value p.
insert v into a[] and the position p by calling the insert() function.

After that print all the elements of the array separated by spaces with a newline in the end. Format string for each integer is " %d" (so a space between elements and before the first element).

In a loop repeatedly do for n times.

Call find_min_pos() to find the position of the minimum element.
With that position call delete() function to remove that element.
Print the value returned by the delete function. Format string for the integer is " %d".

print a newline at the end.
*/

#include <stdio.h>

void insert(int a[], int n, int val, int pos);

int delete(int a[], int n, int pos);

int find_min_pos(int a[], int n);

int main()
{
    int x[1000];
    int n;
    int i;
    int v;
    int p;
    int min;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v);
        scanf("%d", &p);
        insert(x, i, v, p);
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d", x[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        min = find_min_pos(x, n - i);
        printf(" %d", delete(x, n - i, min));
    }
    printf("\n");

    return 0;
}

void insert(int a[], int n, int val, int pos)
{
    int i;
    if (pos < 0 || pos > n)
    {
        return;
    }
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = val;
}

int delete(int a[], int n, int pos)
{
    int i;
    int val;
    if (pos < 0 || pos >= n)
    {
        printf("Bad delete\n");
        return 0;
    }
    val = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    return val;
}

int find_min_pos(int a[], int n)
{
    int i;
    int min;
    int pos;
    if (n == 0)
    {
        return -1;
    }
    min = a[0];
    pos = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }
    return pos;
}