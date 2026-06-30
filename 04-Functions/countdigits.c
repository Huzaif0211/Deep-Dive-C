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

int main()
{

    long long n, c;
    printf("Enter a number: ");
    scanf("%lld", &n);

    c = countdigits(n);
    printf("Total digits: %lld", c);
}