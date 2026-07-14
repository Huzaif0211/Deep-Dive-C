#include <stdio.h>

int main()
{
    int r, c, arr[100][100], sum = 0;

    printf("Enter how many rows and col you want: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < r; k++)
    {
        sum = 0;
        for (int l = 0; l < c; l++)
        {
            sum = sum + arr[k][l];
        }
        printf("Row %d sum = %d\n", k, sum);
    }

    for (int l = 0; l < c; l++)
    {
        sum = 0;
        for (int k = 0; k < r; k++)
        {
            sum = sum + arr[k][l];
        }
        printf("Col %d sum = %d\n", l, sum);
    }
}