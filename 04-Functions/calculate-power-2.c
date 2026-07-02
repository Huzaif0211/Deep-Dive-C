/*Calculating power using o(logb)*/

#include <stdio.h>

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

int main()
{
    long long c, a, b;

    printf("Enter a number: ");
    scanf("%lld", &a);

    printf("Enter a power: ");
    scanf("%lld", &b);

    c = power(a, b);

    printf("The result is: %lld", c);
    return 0;
}