#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int count = 0, i = 0;

    printf("Enter a word (max. 100 characters): ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    while (word[i] != '\0')
    {
        count++;
        i++;
    }

    int temp, start = 0, end = count - 1;

    while (start < end)
    {
        temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }

    printf("The reversed word is: %s", word);
}