#include <stdio.h>

void main()
{
  char st[30];
  int i;

   printf("Enter a string : ");
   gets(st);

   for(i = 0; st[i] ; i ++)
   {
       if(isupper(st[i]))
           st[i] += 32;
       else
         if(islower(st[i]))
            st[i] -= 32;
   }

   puts(st);

}
