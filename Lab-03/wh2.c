/*
WH2: Read two integers n and m. Assume n is smaller than m; print all integers from n upto m
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i = n;
    while (i <= m)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
