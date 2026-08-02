#include <stdio.h>

int main()
{
    int x, arr[100], even = 0, odd = 0, positive = 0, negative = 0, zero = 0;

    printf("Enter how many numbers you want in an array: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < x; j++)
    {
        if (arr[j] % 2 == 0 && arr[j] != 0)
        {
            even = even + 1;
        }
    }

    for (int k = 0; k < x; k++)
    {
        if (arr[k] % 2 != 0)
        {
            odd = odd + 1;
        }
    }

    for (int l = 0; l < x; l++)
    {
        if (arr[l] > 0)
        {
            positive = positive + 1;
        }

        else if (arr[l] < 0)
        {
            negative = negative + 1;
        }

        else if (arr[l] == 0)
        {
            zero = zero + 1;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);

    return 0;
}