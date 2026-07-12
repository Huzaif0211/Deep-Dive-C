#include <stdio.h>

int main()
{
    int score[5] = {90, 12, 7, 89, 77};

    for (int i = 0; i <= 4; i++)
    {
        printf("Score[%d] = %d\n", i, score[i]);
    }
    return 0;
}