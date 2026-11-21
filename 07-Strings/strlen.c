#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int a;

    printf("Enter your name: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    a = strlen(str);
    printf("Length of string is: %d", a);
}