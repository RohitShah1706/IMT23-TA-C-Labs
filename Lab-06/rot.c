/*
[rot] Write a function with prototype   char rot(char x);  which does the following: It returns the character which is one position after (ie next to) the given character. For example, if x was 'c', it returns 'd'.  If x is 'z' it returns 'a'.  Note that this is easily done using the ASCII code of the character.  Then write a main() function to read a string and call rot for each of its characters and replace that character with the character returned by rot. Then it prints the string. For example if the string read is   "cat"  then after replacing each character, the string will contain the word "dbu".
*/

#include <stdio.h>

char rot(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        x = x + 1;
        if (x > 'z')
        {
            x = 'a';
        }
    }
    else if (x >= 'A' && x <= 'Z')
    {
        x = x + 1;
        if (x > 'Z')
        {
            x = 'A';
        }
    }
    return x;
}

int main()
{
    char str[11];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = rot(str[i]);
    }

    printf("%s\n", str);
    return 0;
}

