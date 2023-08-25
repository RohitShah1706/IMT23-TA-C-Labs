/*
WH7: Like WH6, however, stop if ever x becomes 1. 
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int i = 0;
    while (i < 20 && x != 1)
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