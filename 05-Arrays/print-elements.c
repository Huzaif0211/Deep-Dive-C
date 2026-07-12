#include <stdio.h>

int main()
{
    int n, arr[100];
    printf("Enter how many numbers you wanna print: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
}