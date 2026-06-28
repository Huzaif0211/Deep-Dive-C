#include <stdio.h>

int fib(int n)
{
    if (n == 0)

    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num;
    printf("Enter a number: ");

    scanf("%d", &num);
    printf("Fibonacci number at %d is %d", num, fib(num));

    return 0;
}