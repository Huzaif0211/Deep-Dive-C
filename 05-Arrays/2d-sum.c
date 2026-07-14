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

        for (int l = 0; l < c; l++)
        {
            sum = sum + arr[k][l];
        }
    }

    printf("%d", sum);

    return 0;
}