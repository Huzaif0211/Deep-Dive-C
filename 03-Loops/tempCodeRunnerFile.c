#include <stdio.h>

int main()
{
    while (1)
    {
        int n, num;
        printf("If you want to deal with even /odd sum press 1\nIf you want to deal with Factorials press 2\nIf you have to deal with Prime no.'s press 3\nIf you want to exit press 4:  ");

        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the number that you want to check: ");
            scanf("%d", &num);

            if (num % 2 == 1)
            {
                printf("The number is odd\n");
            }
            else
            {
                printf("The number is even\n");
            }

            break;
        case 2:
            printf("Enter the number you want factorial of: ");
            scanf("%d", &num);

            int fact = 1, i;

            for (i = num; i >= 1; i--)
            {
                fact = fact * i;
            }
            printf("The factorial is %d\n", fact);
            break;

        case 3:

            int flag = 0;
            printf("Enter the number you want to check: ");
            scanf("%d", &num);

            if (num <= 1)
            {
                printf("Not prime");
            }
            else
            {
                flag = 0;
            }
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("Prime no.");
            }
            else
            {
                printf("Not prime");
            }
            break;

        case 4:

            return 0;
        }
    }
}
