/*
VS3: Read an integer (assume as above) Print the number with the tens and units place reversed. Sample input output pairs:
1024 1042
24     42
4       40
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int toPrint = n - (n % 100);
    toPrint = toPrint + (n % 10) * 10 + (n % 100 - n % 10) / 10;
    printf("%d\n", toPrint);
    return 0;
}