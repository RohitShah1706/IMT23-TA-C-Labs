/*
(1) Write a function with prototype is int gcd(int x, int y) 

It computes the GCD of the two given numbers. There are two methods that can be followed, so choose between implementation 1 and implementation 2 below:

Implementation 1:

First, find the smaller of the two numbers, let that be f.
starting from f and going down to 1 check if any of the numbers divides both.
If it does then get out of the loop, that is the GCD.
return the GCD value f.

Implementation 2:

Compute the smaller number of x and y, s and the bigger number b
repeat the following:
if s == b then that is the GCD, so return that value of s
else
find d, the reminder of b divided by s
now let b be assigned the value of s (old smaller number is the new bigger number) and s be assigned the value of d
(2) Write a function lcm() its prototype is    int lcm(int x, int y)

It computes the LCM of the two given numbers. The method is as follows:
LCM = product of the numbers divided by their GCD. So lcm() will call gcd() to get the GCD value.

(3) Write a main() function which works as follows:
read two integers. if any of them is zero or negative the program ends.
Otherwise compute their GCD and LCM values and print them.
Then read the next two integer values and repeat the process.

*/


#include <stdio.h>

int gcd_1(int x, int y);

int gcd_2(int x, int y);

int lcm(int x, int y);

int main()
{
    int x, y;
    // printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    while (x > 0 && y > 0)
    {
        // printf("GCD(%d, %d) = %d\n", x, y, gcd(x, y));
        // printf("LCM(%d, %d) = %d\n", x, y, lcm(x, y));
        printf("%d %d\n", gcd(x, y), lcm(x, y));
        // printf("Enter two integers: ");
        scanf("%d %d", &x, &y);
    }
    return 0;
}

int gcd_1(int x, int y)
{
    int f, i;
    if (x < y)
        f = x;
    else
        f = y;
    for (i = f; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
            break;
    }
    return i;
}

int gcd_2(int x, int y)
{
    int s, b, d;
    if (x < y)
    {
        s = x;
        b = y;
    }
    else
    {
        s = y;
        b = x;
    }
    // ! s  min, b max
    while (1)
    {
        if (s == b)
            break;
        else
        {
            d = b % s; // ! d = remove common part of s from b
            b = s; // ! b = min of x, y original
            s = d; // ! s = part of b that is not common with s 
        }
    }
    return s;
}

int lcm(int x, int y)
{
    int l;
    l = (x * y) / gcd_1(x, y);
    return l;
}

