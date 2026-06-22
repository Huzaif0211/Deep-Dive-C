#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1); /*Yaha pe n vo no. hoga jaha tak ka muje sum chaiye aur jou sum(n-1) hai ye start
                                 hoga toh base tak jayega jaise ki agar n = 5 toh sum(n-1) hoga 4 magar vo base tak
                                 jayega pehle 4 fir 3 fir 2 fir 1 yani ki 4+3+2+1*/
    }
}
int main()
{
    int n;
    printf("Enter a number upto you need sum of: ");
    scanf("%d", &n);

    printf("The sum is: %d", sum(n));
    return 0;
}
