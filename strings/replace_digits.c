#include <stdio.h>

void main()
{
  char st[30];
  int i;

   printf("Enter a string : ");
   gets(st);

   for(i = 0; st[i] != '\0' ; i ++)
   {
       if(isdigit(st[i]))
          st[i] = '.';
   }

   puts(st);
}
