// Calculate net price

#include <stdio.h>

void main()
{
  int price,dprice, discount, tax, net_price;

    printf("Enter price :");
    scanf("%d",&price);

    discount = price * 20 / 100;
    dprice = price - discount;
    tax = dprice * 0.08;
    net_price = dprice + tax;

    printf("Price           : %8d\n", price);
    printf("- Discount      : %8d\n", discount);
    printf("After Discount  : %8d\n", dprice);
    printf("+ Tax           : %8d\n", tax);
    printf("Net Price       : %8d\n", net_price);
}
