#include <string.h>
#include <stdio.h>

int main()
{
    char s[] = "Hello";
    char t[30] = "World";
    strcat(t, s);
    printf("String = %s", t);
}

/* Output: String = WorldHello
The Core Problem
When you write:


char s[] = "Hello";   // Defined first
char t[30] = "World"; // Defined second
strcat(t, s);         // 't' is destination, 's' is source

strcat is defined as:

strcat(destination, source);
destination (t) is the base string that gets modified. It currently contains "World".

source (s) is the string being attached to the end. It contains "Hello".

strcat starts at the end of t ("World") and glues s ("Hello") right onto it.

Because t was placed first inside the parentheses of strcat(t, s), "World" stays at the front and "Hello" is tacked onto the tail, producing "WorldHello".

strcat(t, s) saves the combined result directly inside t.
s remains untouched, so printing t is necessary to display the combined string.*/
