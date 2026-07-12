#include <stdio.h>

int main()
{
    int n, max, arr[100];
    printf("Enter how many numbers you wanna check: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int index = 1; index <= n - 1; index++)
    {
        if (arr[index] > max)
        {
            max = arr[index];
        }
    }

    printf("Max is %d", max);

    return 0;
}