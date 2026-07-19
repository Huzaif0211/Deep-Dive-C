#include <stdio.h>

int main()
{
    int a = 69;
    int *ptra = &a; /*The * in the declaration is not "dereference" here — in a declaration,
                     * means "this variable is a pointer."*/

    printf("The address of pointer to a is: %p\n", &ptra);
    printf("The address of a is: %p\n", &a);
    printf("The value of a is: %d\n", *ptra);
    printf("The value of a is: %d\n", a);
}