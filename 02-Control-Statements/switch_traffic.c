#include <stdio.h>

int main()
{
    char light = 'R';
    switch (light)
    {
    case 'R':
        printf("STOP!\n");
        break;

    case 'Y':
        printf("Get Ready!\n");
        break;
    case 'G':
        printf("GO!\n");
        break;
    default:
        printf("No Case Matched");
    }
    return 0;
}