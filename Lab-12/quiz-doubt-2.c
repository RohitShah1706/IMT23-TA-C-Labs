#include<stdio.h>
#include<stdlib.h>

int main() {
    char *x = malloc(100);
    char *y = x;

    printf("x: %p\n", x);
    printf("y: %p\n", y);
    return 0;
}