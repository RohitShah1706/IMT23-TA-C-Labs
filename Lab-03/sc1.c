/*
SC1: Read an integers, say x. Assume x stands for the days of the week, with 1 being Sunday, 2 being Monday and so forth. Print the day of the week corresponding to the given value x. For examples if n was 5 the output would be: Thursday
If x is not in the range [1..7], then just print an error message.
*/ 

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &x);
    
    switch (x) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Error: number must be between 1 and 7\n");
    }

    return 0;
}