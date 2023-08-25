/*
VS2: Read an integer ( assume positive, but can be any number, small or big, that fits in an integer). Print the 10s place digit. Print the hundreds digit. Sample input output pairs are:
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", (n / 10) % 10);
    printf("%d\n", (n / 100) % 10);
    return 0;
}