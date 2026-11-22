#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, size, len;

    printf("Enter how many names you wanna add: ");
    scanf("%d", &size);

    printf("Enter how much longer at max a name will be: ");
    scanf("%d", &len);

    char str[size][len + 1];

    getchar();

    for (i = 0; i < size; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    for (int j = size - 1; j >= 0; j--)
    {
        printf("%s\n", str[j]);
    }

    return 0;
}