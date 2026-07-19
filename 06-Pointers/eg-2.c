#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;

    *p = 10;
    printf("%d\n", x); // prints 10, because *p = 10 changed x directly
}
/*This is the entire superpower of pointers: they let you reach into another variable's
 memory and modify it, even from somewhere else in the program (like inside a function).*/