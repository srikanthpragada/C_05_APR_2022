#include <stdio.h>

void main()
{
   int a[5][5];
   int r, c, largest;

   srand(time(0)); // initialize seed

   for(r=0; r < 5; r ++)
   {
       largest = 0;
       for(c = 0; c < 5 ;  c++)
       {
         a[r][c] = rand() % 10;
         printf("%5d", a[r][c]);
         if (a[r][c] > largest)
             largest = a[r][c];
       }
       printf("%5d \n",largest);
   }


}
