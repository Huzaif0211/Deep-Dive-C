/*Electricity Bill Calculator 
Problem Statement:

Given the number of electricity units consumed, calculate the total bill using the following rules:

0–100 units → ₹5 per unit
101–200 units → ₹7 per unit
Above 200 units → ₹10 per unit

The rate applies to the entire number of units (not slab-based).

Input Format

A single integer representing units consumed.

Output Format

Print exactly:

Total Bill = ₹X

Where X is the calculated amount.*/

#include <stdio.h>

int main()
{
    int num, unit_rate, bill;

    printf("Enter the number of units you have consumed: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 100)
    {
        unit_rate = 5;
    }
    else if (num >= 101 && num <= 200)
    {
        unit_rate = 7;
    }
    else if (num > 200)
    {
        unit_rate = 10;
    }

    bill = unit_rate * num;

    printf("Your electricity bill is %d", bill);

    return 0;
}
