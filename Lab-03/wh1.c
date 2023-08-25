/*
WH1: Read an integer n (assume n is non-negative), print all numbers from n to 2*n.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = n;
    while (i <= 2 * n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}