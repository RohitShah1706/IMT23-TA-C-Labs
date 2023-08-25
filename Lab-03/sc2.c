/*
SC2: Read an integers, say x. Assume x stands for the days of the week, with 1 being Sunday, 2 being Monday and so forth. Print all the days of the week starting at day number given by x. For example if x was 5 the output would be:
Thursday
Friday
Saturday
If x is not in the rang e[1..7], then just print an error message.
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x < 1 || x > 7)
    {
        printf("Error: %d is not in the range [1..7]\n", x);
        return 0;
    }
    switch (x)
    {
        case 1:
            printf("Sunday\n");
        case 2:
            printf("Monday\n");
        case 3:
            printf("Tuesday\n");
        case 4:
            printf("Wednesday\n");
        case 5:
            printf("Thursday\n");
        case 6:
            printf("Friday\n");
        case 7:
            printf("Saturday\n");
    }
    return 0;
}