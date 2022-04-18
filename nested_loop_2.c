// Nested loop
#include <stdio.h>

void main()
{
  int  i,j, n = 1;

     for(i = 1; i <= 10; i ++)
     {
        for(j = 1; j <= 5; j ++)
        {
           printf("%5d", n);
           n ++;
        }

        printf("\n");
     }

}
