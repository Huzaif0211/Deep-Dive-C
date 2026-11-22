#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, size, len, flag = 0;

    printf("Enter how many names you wanna add: ");
    scanf("%d", &size);

    printf("Enter how much alphabets at max. a name will be: ");
    scanf("%d", &len);

    char str[size][len + 1], str1[len + 1];

    getchar();

    for (i = 0; i < size; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    printf("Enter the name you want to find: ");

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    for (j = 0; j < size; j++)
    {
        if (strcmp(str1, str[j]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Found!, at position: %d", j + 1);
    }
    else
    {
        printf("Not found!");
    }

    return 0;
}