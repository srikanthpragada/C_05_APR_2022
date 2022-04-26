#include <stdio.h>

void main()
{
  char st[30];
  int i, count = 0;

   printf("Enter a string : ");
   gets(st);

   for(i = 0; st[i] ; i ++)
   {
       if(isupper(st[i]))
          count ++;
   }

   printf("Count = %d", count);
}
