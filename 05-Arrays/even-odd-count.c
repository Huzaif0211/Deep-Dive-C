#include <stdio.h>

int main()
{
    int n, arr[100], even_count = 0, odd_count = 0;

    printf("Enter how many numbers you want to be checked: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even_count = even_count + 1;
        }
        else if (arr[j] % 2 != 0)
        {
            odd_count = odd_count + 1;
        }
    }

    printf("Even = %d\n", even_count);
    printf("Odd = %d\n", odd_count);

    return 0;
}