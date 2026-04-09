#include <stdio.h>

int main()
{
    int day = 6;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("It's a Weekday. Keep coding!\n");
        break;
    case 6:
    case 7:
        printf("It's the Weekend! Time to rest.\n");
        break;
    default:
        printf("Invalid day number.\n");
    }
    return 0;
}