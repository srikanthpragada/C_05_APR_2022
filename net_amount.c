// Calculate net amount

#include <stdio.h>

void main()
{
  int price, qty, discount, amount;

    printf("Enter price :");
    scanf("%d",&price);
    printf("Enter qty :");
    scanf("%d",&qty);

    if(qty > 2)
        discount = price * 20 / 100;
    else
        discount = price * 10 / 100;

    price = price - discount;
    amount = price * qty;

    printf("Net amount       : %8d\n", amount);
}
