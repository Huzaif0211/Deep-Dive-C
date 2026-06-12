#include <stdio.h>

int main()
{
    int num, i, range;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &num);

    printf("Enter a range upto you want multiplication table of: ");
    scanf("%d", &range);
    for (i = 1; i <= range; i++)
    {
        printf("%d * %d = %d\n", num, i, i * num);
    }
}