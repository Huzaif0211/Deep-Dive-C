/* A shop gives discounts on no. of items bought
if items are more than 10  = 20% discount
if itmes are between 5 and 10 = 10% discount
if items are less than 5 = No discount */

#include <stdio.h>

int main()
{
    int items;
    float price, total;

    printf("Enter the number of items bought: ");
    scanf("%d", &items);

    printf("Enter the price of one item: ");
    scanf("%f", &price);

    total = items * price;

    if (items > 10)
    {
        total = total - (total * 0.20);
    }
    else if (items >= 5 && items <= 10)
    {
        total = total - (total * 0.10);
    }
    else
    {
        total = total;
    }

    printf("Total amount to pay %4.3f", total);

    return 0;
}