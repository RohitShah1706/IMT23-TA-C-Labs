/*
write c program that takes entire as input
then takes another word as input
if print yes if the word is present in the sentence
else print no
NOTE: that the word can be present in the sentence in any case
*/

#include <stdio.h>
#include <string.h>

int are_chars_equal(char a, char b)
{   
    if (a == b)
    {
        return 1;
    }
    else if (a >= 'A' && a <= 'Z' && b >= 'a' && b <= 'z')
    {
        // printf("Case1: %c %c\n", a, b);
        if (a - 'A' + 'a' == b)
        {
            return 1;
        }
    }
    else if (a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z')
    {
        // printf("Case2: %c %c\n", a, b);
        if (a - 'a' + 'A' == b)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char sentence[1000], word[100];
    int i, j, flag = 0;

    printf("Enter the sentence: ");
    fgets(sentence, 1000, stdin);
    printf("Enter the word: ");
    scanf("%s", word);

    for (i = 0; i < strlen(sentence); i++)
    {
        if (are_chars_equal(sentence[i], word[0]))
        {
            for (j = 0; j < strlen(word); j++)
            {
                if(!are_chars_equal(sentence[i + j], word[j]))
                {
                    break;
                }
            }
            if (j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}