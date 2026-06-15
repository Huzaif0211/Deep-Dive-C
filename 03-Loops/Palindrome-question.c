/*Palindrome Number
Problem Statement:

Given an integer n, determine whether it is a palindrome.

A number is called a palindrome if it remains the same when its digits are reversed.

Input Format

A single integer n.

Constraints

-1000000 ≤ n ≤ 1000000

Output Format

Print exactly one line:

Palindrome

OR

Not Palindrome*/

#include <stdio.h>

int main()
{

    int num, original, reverse = 0, digit;

    printf("Enter a number that you want to check: ");
    scanf("%d", &num);
    original = num;
    if (num < 0)
    {
        printf("Not palindrome");
        return 0;
    }
    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}