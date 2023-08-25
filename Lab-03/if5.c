/*
IF5: Read an integer. If it is negative, just say it is negative and return from main. (program ends) Otherwise, check if the last two digits are in decreasing order. If not, integerchange them. Print the the number with last two digits in decreasing order.
*/

#include <stdio.h>

int main(void) {
    int a, b, c, d;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("Negative\n");
        return 0;
    }
    b = a % 10;
    c = (a / 10) % 10;
    d = a / 100;
    if (b > c) {
        printf("%d%d%d\n", d, c, b);
    } else {
        printf("%d%d%d\n", d, b, c);
    }
    return 0;
}