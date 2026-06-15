/*Password Validation 
Problem Statement:

You are given an integer representing a password.

A password is considered valid if:

It contains exactly 4 digits.
It does not start with 0.
The sum of its digits is even.

If all conditions are satisfied, print:

Valid Password

Otherwise, print:

Invalid Password
Input Format

A single integer.*/

#include <stdio.h>

int main()
{
    int n, digit, sum = 0, original;

    printf("Enter the password:");
    scanf("%d", &n);
    original = n;
    if (n >= 1000 && n <= 9999)
    {
        }
    else
    {
        return 0;
    }

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (sum % 2 == 0)
    {
        printf("Valid password");
    }
    else
    {
        printf("Invalid password");
    }
}