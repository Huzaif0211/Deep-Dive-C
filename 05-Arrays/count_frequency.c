#include <stdio.h>

int main()
{
    int n, arr[100], x, count = 0;

    printf("Enter how many numbers you want to be checked: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to check: ");
    scanf("%d", &x);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            count = count + 1;
        }
    }
    printf("Occurences are: %d", count);
}
