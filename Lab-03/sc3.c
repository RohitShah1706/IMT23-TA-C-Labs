/*
SC3: Read in an integer, say x. Depending on the value of x do the following:
if x is 1, then print "apple"
if x is 2, then print "orange"
if x is 3, then print "banana" and then "orange"
if x is non of the above, print "unknown fruit"
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch (x)
    {
        case 1:
            printf("apple\n");
            break;
        case 2:
            printf("orange\n");
            break;
        case 3:
            printf("banana\n");
            printf("orange\n");
            break;
        default:
            printf("unknown fruit\n");
    }
    return 0;
}