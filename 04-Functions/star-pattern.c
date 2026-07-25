#include <stdio.h>

int main()
{
    int a, n;

    printf("If you want triangular star pattern press 1, if you want reverse triangular pattern press 0: ");
    scanf("%d", &a);

    printf("Enter the height of star pattern: ");
    scanf("%d", &n);

    if (a == 1)
    {
        printf("Your triangular pattern is:\n");
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k <= i; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    else if (a == 0)
    {
        printf("Your reversed triangular pattern is:\n ");
        for (int j = n; j > 0; j--)
        {
            for (int l = j; l > 0; l--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    else
    {
        printf("Choose the correct option");
    }

    return 0;
}
