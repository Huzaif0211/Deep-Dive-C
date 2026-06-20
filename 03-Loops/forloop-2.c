/*Question: Read two integers a and b.
Loop through every number from a to b (inclusive).
For each number:
If it is between 1 and 9, print its English word (one, two, ..., nine).
If it is greater than 9:
Print "even" if the number is even.
Print "odd" if the number is odd.
Example

Input:

8
11

Output:

eight
nine
even
odd*/

#include <stdio.h>

int main()
{
    int a, b, i;
    char *words[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            printf("%s\n", words[i - 1]);
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("Even\n");
            }
            else
            {
                printf("Odd\n");
            }
        }
    }
}