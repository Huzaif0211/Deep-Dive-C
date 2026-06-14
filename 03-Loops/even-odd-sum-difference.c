/* Question : Even–Odd Sum Difference
📝 Problem Statement

Given a positive integer n, calculate:

The sum of all even numbers from 1 to n
The sum of all odd numbers from 1 to n
The difference between even sum and odd sum
📥 Input Format

A single integer n.

📤 Output Format

Print exactly:

Even Sum = X
Odd Sum = Y
Difference = Z

Where:

X → sum of even numbers from 1 to n
Y → sum of odd numbers from 1 to n
Z → X − Y
🔒 Constraints

1 ≤ n ≤ 100000

That’s it.

Now:

Solve manually for n = 6 on paper.
Write logical steps in comments.
Then code.*/

#include <stdio.h>

int main()
{

    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;
        }
        else
        {
            odd_sum = odd_sum + i;
        }
    }
    printf("The even sum is %d\n", even_sum);
    printf("The odd sum is %d\n", odd_sum);

    printf("The difference is %d\n", even_sum - odd_sum);

    return 0;
}