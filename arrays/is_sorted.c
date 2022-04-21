#include <stdio.h>

void main()
{
   int a[5] = {1, 3, 2, 8, 10};
   int i, sorted = 1;


   for(i=0; i < 4; i ++)
   {
       if(a[i] > a[i+1]) {
           sorted = 0;
           break;
       }
   }

   if(sorted)
      puts("Sorted!");
   else
      puts("Not Sorted!");
}
