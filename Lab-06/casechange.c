/*
[casechange]  In this exercise we write a main() function only. It reads a string into an array. Assume no more than 10 characters in the string, including the '\0'. Then for each letter in the range 'a'-'z' we replace it with the corresponding uppercase letter ie. 'A'-'Z'. To do this do not use any library functions. You also should not need to look up the ASCII for any character. Thus it modifes the string in the array. Then it prints this modified string.
*/

#include <stdio.h>

int main()
{
    char str[11];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("%s\n", str);
    return 0;
}