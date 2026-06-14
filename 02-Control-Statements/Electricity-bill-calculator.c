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
