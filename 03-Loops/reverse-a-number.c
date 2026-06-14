#include <stdio.h>

int main (){

    int n = 1234 ,digit;

    while (n!=0)
    {
        digit = n % 10 ;
        printf("%d",digit);
        n = n/ 10;
    }
    
}