/*
SC4: Read an integer, say x. Then read an other integer say op;
if op's value is 1 then square the number x and add 1.
if op's value is 2 then square the number x and add 3.
if op's value is 3 then divide the number by 2 and print the quotient.
if op's value is 4 then divide the number by 2 and print the remainder.
if op's value is none of these then simply print an error message saying that the value of op is invalid.
*/

#include <stdio.h>

int main()
{
    int x, op;
    scanf("%d", &x);
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("%d\n", x * x + 1);
            break;
        case 2:
            printf("%d\n", x * x + 3);
            break;
        case 3:
            printf("%d\n", x / 2);
            break;
        case 4:
            printf("%d\n", x % 2);
            break;
        default:
            printf("Error: invalid op\n");
    }
    return 0;
}