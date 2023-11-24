#include<stdio.h>

int main() {
    int *ptr;
    int x;
    printf("%d\n", *ptr);
    ptr = &x;
    *ptr = 17;

    printf("%d\n", *ptr);
    return 0;
}