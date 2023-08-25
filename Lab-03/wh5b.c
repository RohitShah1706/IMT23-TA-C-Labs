/*
WH5b: Do exactly as in the above, however if n has no factors other than 1 and itself, print that n is prime. 
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("%d is prime\n", n);
    }
    return 0;
}