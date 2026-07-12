#include <stdio.h>
int main()
{
    int n, min, arr[100];

    printf("Enter how many numbers you wanna check: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int j = 1; j <= n - 1; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }
    printf("Min is: %d", min);

    return 0;
}