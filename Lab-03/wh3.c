/*
WH3: Read an integer n; print all numbers from n to 2*n that are not divisible by 3.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = n;
    while (i <= 2 * n)
    {
        if (i % 3 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}