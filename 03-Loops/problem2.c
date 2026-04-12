/*Problem Statement:
  Write a C program using nested do-while loops that generates a multiplication table. The program
  should ask the user for two inputs: the number to be multiplied and the range (limit) of the table.
  After printing the table, the program should allow the user to repeat the process or exit by
  entering a specific value (1 to continue, 0 to exit).*/

#include <stdio.h>

int main()
{
    int num, i = 1, range, continuation;
    do
    {
        printf("Enter the number you want multiplication table of: ");
        scanf("%d", &num);

        printf("Enter a number upto you want your multiplication table: ");
        scanf("%d", &range);

        i = 1;

        do
        {
            printf("%d * %d = %d\n", num, i, num * i);
            i++;
        } while (i <= range);

        printf("Do you want to continue if yes type 1 if not type 0: ");
        scanf("%d", &continuation);

    } while (continuation == 1);
}
