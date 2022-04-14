// Print a table for given number

#include <stdio.h>

void main()
{
  int num,i;

     printf("Enter number : ");
     scanf("%d", &num);

     for(i = 1; i <= 20; i ++)
     {
         printf("%3d * %2d = %4d\n",num,i, num * i);
     }

}
