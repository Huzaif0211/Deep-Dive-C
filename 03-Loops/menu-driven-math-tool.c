/*Menu Driven Math Tool
Problem Statement:

Create a menu-driven program that repeatedly performs operations based on user choice:

1. Check Even/Odd
2. Find Factorial
3. Check Prime
4. Exit

The program must continue running until the user selects Exit.

Requirements:
Use switch
Use a loop to repeat menu
Use proper break
Exit only when user selects option 4
Input Format:

User first enters a choice.
If the choice requires a number, then take that number as input.*/

#include <stdio.h>

int main()
{
    while (1)
    {
        int n, num;
        printf("If you want to deal with even/odd sum press 1\nIf you want to deal with Factorials press 2\nIf you have to deal with Prime no.'s press 3\nIf you want to exit press 4:  ");

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
        {
            int flag = 0;
            printf("Enter the number you want to check: ");
            scanf("%d", &num);

            if (num <= 1)
            {
                printf("Not prime\n");
                break;
            }
            else
            {
                for (i = 2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        flag = 1;  // remainder agar zero hoga toh flag = 1 that means ki muje divisor milgaya.
                    }
                }
                if (flag == 0)
                {
                    printf("Prime no.\n");
                }
                else
                {
                    printf("Not prime");
                }
                break;
            }
        }
        case 4:

            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}

/* If you do:

int fact = 0;

Then:

fact = 0 × 5 = 0
fact = 0 × 4 = 0
fact = 0 × 3 = 0
...

👉 Final answer will ALWAYS be 0 ❌

✅ Why 1 works

Start:

fact = 1;

Now:

fact = 1 × 5 = 5
fact = 5 × 4 = 20
fact = 20 × 3 = 60
fact = 60 × 2 = 120

✔ Correct result*/