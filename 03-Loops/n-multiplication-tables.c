#include <stdio.h>

int main()
{

    int i, j, n;

    printf("Enter the number you want multiplication table upto ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
       
        printf("Table of %d\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}