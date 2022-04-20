// 1 in diag and anti-diag cells and 0 in others

#include <stdio.h>

void main()
{
  int  i,j;

     for(i = 1; i <= 5; i ++)
     {
        for(j = 1; j <= 5; j ++)
        {
            if(i == j || i + j == 6)
                 printf("%d ", 1);
            else
                 printf("%d ", 0);
        }

        printf("\n");
     }

}
