#include <stdio.h>

int main()
{
    int maths, science;

    printf("Have you passed in Maths if yes type 1 if not type 0: ");
    scanf("%d", &maths);

    printf("Have you passed in Science if yes type 1 if not type 0: ");
    scanf("%d", &science);

    if (maths == 1 && science == 1)
    {
        printf("Congratulations! You get 30 points.");
    }
    else if (maths == 1 || science == 1)
    {
        printf("Congratulations! You get 15 points.");
    }
    else
    {
        printf("Hard luck! You have failed.");
    }
    return 0;
}