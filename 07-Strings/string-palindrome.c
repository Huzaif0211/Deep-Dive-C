#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, count = 0, flag = 0;

    printf("Enter your word: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    int start = 0, end = count - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            flag = 1;
            break;
        }

        start++;
        end--;
    }

    if (flag == 0)
    {
        printf("The string is palindrome");
    }
    else
    {

        printf("The string is not palindrome");
    }

    return 0;
}