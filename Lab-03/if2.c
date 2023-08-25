/*
IF2: Read two real numbers f and c representing temperature in Farenheit and Celcius respectively. Also read in a small real number called delta representing possible error. Check if c and f are the same temperature assuming small error of at most plus or minus delta is ok when f is converted to c. Print an appropriuate message.
*/

#include <stdio.h>

int main(void) {
    double f, c, delta;
    printf("Enter two real numbers: ");
    scanf("%lf %lf", &f, &c);
    printf("Enter a small real number: ");
    scanf("%lf", &delta);
    if (c - delta <= (((f - 32) * 5) / 9) && (((f - 32) * 5) / 9) <= c + delta) {
        printf("Same temperature\n");
    } else {
        printf("Different temperature\n");
    }
    return 0;
}