#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[5][10];
    int i;

    printf("Enter 5 names: ");

    for (i = 0; i < 5; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}