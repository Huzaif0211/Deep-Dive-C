#include <stdio.h>

int main()
{
    int a = 2;

    switch (a)
    {
    case 2:
        printf("Value is 2");
        break;
    case 3:
        printf("Value is 3");
        break;
    default:
        printf("Nothing matched");
        break;
    }
}