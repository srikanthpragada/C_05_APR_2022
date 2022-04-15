// Print total for the given amounts
#include <stdio.h>

void main()
{
  int  amount, total_amount = 0;


     while(1)
     {
         printf("Enter a number [0 to stop]: ");
         scanf("%d",&amount);

         if (amount == 0)
             break;

         total_amount += amount;
     }

     printf("%d ", total_amount);
}
