#include <stdio.h>

float km_mile(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n / 1.609;
    }
}
float inch_feet(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n / 12;
    }
}
float cm_inch(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n / 2.54;
    }
}
float inch_mtr(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n * 39.37;
    }
}
float pound_kg(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n / 2.205;
    }
}

int main()
{
    while (1)
    {
        int x;
        float n, a, b, c, d, e;
        printf("For converting:\nKM to Mile press 1\nINCH to Feet press 2\nCM to INCH press 3\nINCH to METRE press 4\nPOUND to KG press 5: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter a value: ");
            scanf("%f", &n);
            a = km_mile(n);
            printf("%f\n", a);
            break;
        case 2:
            printf("Enter a value: ");
            scanf("%f", &n);
            b = inch_feet(n);
            printf("%f\n", b);
            break;
        case 3:
            printf("Enter a value: ");
            scanf("%f", &n);
            c = cm_inch(n);
            printf("%f\n", c);
            break;
        case 4:
            printf("Enter a value: ");
            scanf("%f", &n);
            d = inch_mtr(n);
            printf("%f\n", d);
            break;
        case 5:
            printf("Enter a value: ");
            scanf("%f", &n);
            e = pound_kg(n);
            printf("%f\n", e);
            break;
        default:
            printf("Try choosing a given option\n");
            break;
        }
    }
}
