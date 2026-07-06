#include <stdio.h>

int minSteps(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + minSteps(n / 2);
    }
    else
    {
        return 1 + minSteps(n - 1);
    }
}

int main()
{
    int n, c;
    printf("Enter a number: ");
    scanf("%d", &n);

    c = minSteps(n);

    printf("Min steps: %d", c);
}