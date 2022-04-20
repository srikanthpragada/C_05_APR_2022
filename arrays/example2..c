#include <stdio.h>

void main()
{
   int a[10];
   int i;


   for(i=0; i < 10; i ++)
   {
       a[i] = i + 1;
   }


   for(i=0; i < 10; i ++)
   {
      printf("%5d", a[i]);
   }

}
