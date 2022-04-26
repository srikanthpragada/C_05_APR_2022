#include <stdio.h>

void main()
{
   int a[5][5];
   int r, c, sn;

   srand(time(0)); // initialize seed

   for(r=0; r < 5; r ++)
   {
       for(c = 0; c < 5 ;  c++)
       {
         a[r][c] = rand() % 100;
         printf("%5d", a[r][c]);
       }
       putch('\n');
   }

   printf("Enter search number : ");
   scanf("%d",&sn);

   for(r=0; r < 5; r ++)
   {
       for(c = 0; c < 5 ;  c++)
       {
          if(a[r][c] == sn)
          {
              printf("Found at %d, %d\n", r,c);
          }
       } // inner for
   } // outer for


}
