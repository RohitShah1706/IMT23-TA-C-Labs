#include <stdio.h> // ! printf() and scanf()

int main() {
    int a;
    scanf("%d", &a);

    printf("a = %d\n", a);

    // print out in hours and minutes and seconds
    int hours = a / 3600;
    int minutes = (a - hours * 3600) / 60;
    int seconds = a - hours * 3600 - minutes * 60;

    printf("%dh %dm %ds\n", hours, minutes, seconds);

    return 0;
}
