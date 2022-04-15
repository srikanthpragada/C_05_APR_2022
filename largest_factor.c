// Take a num and display largest factor

#include <stdio.h>

void main()
{
  int num, i;

     printf("Enter number : ");
     scanf("%d", &num);

     for(i = num/2;  ; i--)
     {
         if(num % i == 0)
         {
             printf("%d", i);
             break;
         }
     }
}
