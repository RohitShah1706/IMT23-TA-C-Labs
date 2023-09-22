/*
[split] Write  a main() function only. It reads a character string (at most 20 characters in length) into an array. Then it picks up five letters of the string, copies it to another character array, puts a '\0' at the end and prints the string using a printf with a %s convsion. It does it similarly for the rest of the original array. If there are fewer than 5 letters at any time, it just copies whatever is left in the array. For example if the input is the string "stonebrickfruitpen" , then the output would be the strings "tone"  "brick" "fruit" and "pen" one on each line of the terminal.
*/

#include <stdio.h>

int main()
{
    char str[21];
    scanf("%s", str);

    char str2[6];
    int i = 0;
    while (str[i] != '\0')
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == '\0')
            {
                str2[j] = '\0';
                break;
            }
            str2[j] = str[i];
            i++;
        }
        str2[5] = '\0';
        printf("%s\n", str2);
    }

    return 0;
}