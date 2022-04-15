// Count no. of even numbers
#include <stdio.h>

void main()
{
  int  num, count = 0;

     while(1)
     {
         printf("Enter a number [0 to stop]: ");
         scanf("%d",&num);

         if (num == 0)
             break;

         if(num % 2 == 0)
             count ++;
     }

     printf("%d ", count);
}
