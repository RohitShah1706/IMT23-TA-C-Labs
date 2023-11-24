#include <stdio.h>

void foo(int **x) {
    int y = 10;
    *x = &y;

    printf("2nd: %d\n", **x);
}

int main() {
    int i = 2;
    int *p = &i;

    printf("1st: %d\n", *p);

    foo(&p);

    printf("3rd: %d\n", *p);

}
