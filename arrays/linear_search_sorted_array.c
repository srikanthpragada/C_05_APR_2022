#include <stdio.h>

void main()
{
   int a[] = {1, 3, 6, 8, 10, 20, 45, 55, 68, 100};
   int i, found = 0;

   int sn = 15;

   for(i=0; i < 10; i ++)
   {
      if(a[i] == sn)
      {
          printf("Found at %d", i);
          found = 1;
          break;
      }

      if(a[i] > sn)
         break;
   }

   if(!found)
    printf("Not found!");

}
