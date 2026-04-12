/*Problem Statement:
  Write a C program using nested do-while loops that asks the user for a positive integer n, prints
  all natural numbers from 1 to n, and calculates their sum. After displaying the result, the
  program should ask the user if they wish to perform the calculation again for a different number.*/

#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0, continuation;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        i = 1;
        sum = 0;
        do
        {
            printf("%d\n", i);
            sum = sum + i;
            i = i + 1;
        } while (i <= num);

        printf("The sum is %d\n", sum);

        printf("Do you want to continue if yes type 1 if not type 0: ");
        scanf("%d", &continuation);

    } while (continuation == 1);
}
