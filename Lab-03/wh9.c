/*
WH9: Do as in WH5a, however repeatedly ask for x and print the factors. Stop when a negative value of x is given.
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x >= 0)
    {
        int i = 1;
        while (i <= x)
        {
            if (x % i == 0)
            {
                printf("%d\n", i);
            }
            i++;
        }
        scanf("%d", &x);
    }
    return 0;
}