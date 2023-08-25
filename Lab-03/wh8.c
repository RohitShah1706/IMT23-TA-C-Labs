/*
WH8:  Do as in SC1, however repeatedly ask for x and print the corresponding day. Also, if the input is outside [1..7], then also, just also stop the repeating loop.
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x >= 1 && x <= 7)
    {
        switch (x)
        {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
        }
        scanf("%d", &x);
    }
    return 0;
}