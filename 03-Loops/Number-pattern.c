/*Question: Number Pattern
Problem Statement

Print the following pattern exactly:

1
12
123
1234
12345

Rules:
Use loops.
Hardcoding is not allowed.
Try to use nested loops.
Don't use arrays.*/

#include <stdio.h>

int main()
{

    int row, i = 1;

    for (row = 1; row <= 5; row++)
    {
        for (i = 1; i <= row; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
}