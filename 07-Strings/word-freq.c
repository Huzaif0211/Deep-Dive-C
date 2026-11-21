#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], a;
    int b, i = 0, count = 0;

    printf("Enter a sentence: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character whose freq you wanna check: ");
    scanf("%c", &a);

    b = strlen(str);

    while (str[i] != '\0')
    {
        if (str[i] == a)
        {
            count++;
        }
        i++;
    }

    printf("Freq is = %d", count);

    return 0;
}