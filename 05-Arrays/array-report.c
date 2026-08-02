#include <stdio.h>

int main()
{
    int x, arr[100], min, max, sum = 0;
    float avg;

    printf("Enter how many numbers you want to add in an array: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int j = 0; j < x; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    min = arr[0];
    for (int k = 0; k < x; k++)
    {
        if (arr[k] < min)
        {
            min = arr[k];
        }
    }

    for (int l = 0; l < x; l++)
    {
        sum = sum + arr[l];
    }

    avg = (float)sum / x;

    printf("Max is: %d\n", max);
    printf("Min is: %d\n", min);
    printf("Sum is: %d\n", sum);
    printf("Avg is: %.2f\n", avg);
}