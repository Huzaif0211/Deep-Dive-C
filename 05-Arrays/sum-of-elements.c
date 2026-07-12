#include <stdio.h>

int main()
{
    int a, sum[100], s = 0;
    printf("Enter how many numbers you wanna add: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("Enter a number: \n");
        scanf("%d", &sum[i]);
    }

    for (int j = 0; j < a; j++)
    {
        s = s + sum[j];
    }
    printf("The sum is %d", s);
}