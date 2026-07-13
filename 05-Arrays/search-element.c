#include <stdio.h>

int main()
{
    int n, arr[100], x, found = 0, position;

    printf("Enter how many numbers you want to keep in an array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number you wanna check: ");
    scanf("%d", &x);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            position = j;
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("%d", position);
    }
    else
    {
        printf("Your no. didn't match with any element");
    }

    return 0;
}