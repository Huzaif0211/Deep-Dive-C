#include <stdio.h>

int sum_of_squares(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return n * n + sum_of_squares(n - 1);
    }

    else
    {
        printf("Enter 1 or a number greater than it");
        return 0;
    }
}
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    b = sum_of_squares(a);

    printf("%d", b);
}