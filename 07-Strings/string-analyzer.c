#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], ch;
    int count = 0, i = 0, words = 0, vowels = 0, consonants = 0, digits = 0, space = 0;

    printf("Enter a sentence: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    while (str[i] != '0')
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            words++;
        }

        if (isalpha(str[i]))
        {
            ch = tolower((unsigned char)str[i]);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        if (isdigit(str[i]))
        {
            digits++;
        }

        if (isspace(str[i]))
        {
            space++;
        }

        i++;
    }

    printf("Total charcters: %d\nTotal words:%d\nTotal vowels:%d\nTotal consonants:%d\nTotal digits:%d\nTotal spaces:%d", count, words, vowels, consonants, digits, space);
}