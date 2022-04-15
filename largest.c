// Take 5 num and display largest

#include <stdio.h>

void main()
{
  int num, i, largest;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter number : ");
         scanf("%d", &num);

         if (i == 1)
             largest = num;
         else
           if (num > largest)
              largest = num;
     }

     printf("Largest = %d", largest);

}
