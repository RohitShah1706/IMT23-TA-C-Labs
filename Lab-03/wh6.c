/*
WH6:  Read an integer x.  Do the following operation repeatedly (collatz sequence): if x is even then change x to x/2. If x is odd, change it to 3*x + 1. Print 20 successive values of x starting with the input given. 
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int i = 0;
    while (i < 20)
    {
        printf("%d\n", x);
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        i++;
    }
    return 0;
}