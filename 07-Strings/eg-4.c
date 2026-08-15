#include <string.h>
#include <stdio.h>

int main()
{
    char string1[] = "Huzaif";
    char string2[] = "GOAT";
    int a;
    a = strcmp(string1, string2);
    printf("\n%d", a);
    return 0;
}
// Output:1