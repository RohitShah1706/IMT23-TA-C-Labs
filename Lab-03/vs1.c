/*
No if, switch or while

VS1: Read three integers n, m and k.
If n persons can make m chairs in a day,  print how many chairs k persons can make in a day.
*/

#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    printf("%d", (m * k) / n);
    return 0;
}