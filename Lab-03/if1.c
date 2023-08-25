/*
IF1: Read three integers a, b, and c. Check that a equals b * c. Print an appropriate message indicating if the relationship holds.
*/

#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b * c) {
        printf("%d equals %d * %d\n", a, b, c);
    } else {
        printf("%d does not equal %d * %d\n", a, b, c);
    }
    return 0;
}