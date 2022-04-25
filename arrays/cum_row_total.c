#include <stdio.h>

void main()
{
   int a[5][5];
   int r,c, total = 0;


   srand(time(0)); // initialize seed

   for(r=0; r < 5; r ++)
   {
       for(c = 0; c < 5 ;  c++)
       {
         a[r][c] = rand() % 10;
         printf("%5d", a[r][c]);
         total += a[r][c];
       }
       printf("%5d \n",total);
   }


}
