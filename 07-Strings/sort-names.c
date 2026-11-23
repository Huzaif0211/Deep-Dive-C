#include <stdio.h>
#include <string.h>

int main()
{
    int i, size, len;

    printf("Enter how many names you wanna add: ");
    scanf("%d", &size);

    printf("Enter how much alphabets at max. a name will be: ");
    scanf("%d", &len);

    char str[size][len + 1], temp[len + 1];

    getchar();

    for (i = 0; i < size; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    for (i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    int unique = 1;

    printf("%s\n", str[0]);

    for (int i = 1; i < size; i++)
    {
        if (strcmp(str[i], str[i - 1]) != 0)
        {

            printf("%s\n", str[i]);
            unique++;
        }
    }

    printf("Unique names: %d ", unique);

    return 0;
}