#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, vowel = 0;
    char word[100];

    printf("Enter a word you want to check (max 100 characters): ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    while (word[i] != '\0')
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vowel = vowel + 1;
        }

        i++;
    }

    printf("No. of vowels: %d", vowel);
}