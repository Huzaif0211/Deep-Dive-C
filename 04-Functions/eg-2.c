#include <stdio.h>

int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);

    printf("The number is %d", i);
    return i;
}

int main()
{
    int c;
    c = takenumber();
    return 0;
}