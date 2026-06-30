#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n != 0)
    {
        return x * power(x, n - 1);
    }
}

int main()
{
    int x, n, c;

    printf("Enter a number ");
    scanf("%d", &x);

    printf("Enter a power ");
    scanf("%d", &n);

    c = power(x, n);

    printf("%d", c);
    return 0;
}