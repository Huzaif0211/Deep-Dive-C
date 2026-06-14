#include <stdio.h>

int main()
{

    int num, original, reverse = 0, digit;

    printf("Enter a number that you want to check: ");
    scanf("%d", &num);
    original = num;
    if (num < 0)
    {
        printf("Not palindrome");
        return 0;
    }
    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}