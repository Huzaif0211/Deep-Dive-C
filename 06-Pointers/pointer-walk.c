#include <stdio.h>

int main()
{

    int x, arr[100], sum = 0;

    printf("Enter how many numbers you want to add in an array: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p = arr;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", *p);
        sum = sum + *p;
        p++;
    }

    printf("\nSum = %d", sum);
}
