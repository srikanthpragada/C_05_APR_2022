#include <stdio.h>

void main()
{
   int a[10];
   int i,j,t;


   srand(time(0)); // initialize seed
   printf("Original Array : ");
   for(i=0; i < 10; i ++)
   {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
   }

   // reverse it
   for(i = 0, j = 9; i < 5; i ++, j --)
   {
       t = a[i];
       a[i] = a[j];
       a[j] = t;
   }

   printf("\nReversed Array : ");
   for(i=0; i < 10; i ++)
   {
      printf("%5d", a[i]);
   }
}
