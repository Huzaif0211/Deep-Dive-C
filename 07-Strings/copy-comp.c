#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str3[20];

    printf("Enter first word: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter 2nd word: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strncpy(str3, str1, sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = '\0';

    printf("Copied string: %s\n", str3);

    if (strcmp(str1, str2) == 0)
    {
        printf("The original two strings are equal.");
    }
    else
    {
        printf("The original two strings are not equal.");
    }

    return 0;
}