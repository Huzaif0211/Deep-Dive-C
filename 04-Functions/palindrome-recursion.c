#include <stdio.h>

int countdigits(long long n)
{
    if (n < 10)
    {
        return 1;
    }
    else if (n >= 10)
    {
        return 1 + countdigits(n / 10);
    }
}

long long power(long long a, long long b)
{

    if (b == 0)
    {
        return 1;
    }

    if (b % 2 == 0)
    {
        long long half;
        half = power(a, b / 2);
        return half * half;
    }
    else if (b % 2 != 0)
    {
        return a * power(a, b - 1);
    }
}

long long palindrome(long long n)
{
    long long first, last, d, inner;

    last = n % 10;
    d = countdigits(n);
    first = n / power(10, d - 1);

    if (first != last)
    {
        return 0;
    }
    else if (d <= 1)
    {
        return 1;
    }
    else
    {
        inner = (n / 10) % power(10, d - 2);
        return palindrome(inner);
    }
}

int main()

{
    long long c, n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    c = palindrome(n);

    if (c == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}