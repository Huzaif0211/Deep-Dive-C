#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i = 0, flag = 0;

    printf("Enter a word (max. 100 characters): ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    while (word[i] != '\0')
    {
        char *first = strchr(word, word[i]);
        char *last = strrchr(word, word[i]);

        if (first == last)
        {
            printf("First non repeating character is: %c", word[i]);
            flag = 1;
            break;
        }

        i++;
    }

    if (flag != 1)
    {
        printf("-1");
    }

    return 0;
}