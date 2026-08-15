#include <string.h>
#include <stdio.h>

int main()
{
    char s[] = "HuzaifGOAT";
    char t[20];
    strcpy(t, s);
    printf("\n Source string = %s", s);
    printf("\n Target string = %s", t);
}
// And here is the output...
// Source string = HuzaifGOAT
// Target string = HuzaifGOAT