// Print average of even and odd numbers
#include <stdio.h>

void main()
{
  int  num, even_total = 0, even_count = 0, odd_total = 0, odd_count = 0;

     while(1)
     {
         printf("Enter a number [0 to stop]: ");
         scanf("%d",&num);

         if (num == 0)
             break;

         if(num % 2 == 0)
         {
             even_count++;
             even_total += num;
         }
         else
         {
             odd_count++;
             odd_total += num;
         }
     }

     printf("Even Avg : %d, Odd Avg : %d", even_total/ even_count, odd_total / odd_count);
}
