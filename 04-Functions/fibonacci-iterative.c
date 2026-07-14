#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1;

    if (n >= 1)
        printf("%d ", a);
    if (n >= 2)
        printf("%d ", b);

    for (int i = 0; i < n - 2; i++)
    {
        int sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }

    return 0;
}