#include <stdio.h>

int main()
{
    int r, c, sum = 0, arr[100][100], max, min;

    printf("How many rows do you want: ");
    scanf("%d", &r);

    printf("How many coloumns do you want: ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);

            sum = sum + arr[i][j];
            
            if (i == 0 && j == 0)
            {
                max = arr[0][0];
                min = arr[0][0];
            }

            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }

            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
}