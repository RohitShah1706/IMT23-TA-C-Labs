/*
WH4: Read two integers n and m. If n > m integerchange their values so that n  is at most m. Now print all integers from n upto m.
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    int i = n;
    while (i <= m)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}