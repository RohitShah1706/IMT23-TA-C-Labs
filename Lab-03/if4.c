/*
IF4: Read in three integers a, b and c. Rearrange them so that a is the largest and c is the smallest and b is in between. Now print a, b and c.
*/

#include <stdio.h>

int main(void) {
    int a, b, c, temp;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}