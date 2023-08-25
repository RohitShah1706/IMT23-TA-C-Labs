/*
IF3: Read in two integers a and b. Rearrange them so that a is larger and b is smaller. Print the values of  a and then b.
*/

#include <stdio.h>

int main(void) {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}