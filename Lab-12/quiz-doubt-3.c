#include<stdio.h>

int main() {
    char a[] = {'a', 'b', 'c', '\0'};
    char *x = a[0];

    printf("%s\n", x);
    printf("%s\n", *(x+1));

    // print size of a
    // printf("sizeof(a): %lu\n", sizeof(a));
    // printf("sizeof(a[0]): %lu\n", sizeof(a[0]));
    // printf("sizeof(x): %lu\n", sizeof(x));
    return 0;
}