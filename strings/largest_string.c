// Take 5 strings and display the largest

#include <stdio.h>

void main()
{
  char st[30], ls[30];
  int i;

   strcpy(ls,"");   // ls[0] = '\0';

   for(i = 0; i < 5 ; i ++)
   {
     printf("Enter string :");
     gets(st);
     if (strcmp(st,ls) > 0)
        strcpy(ls, st);
   }

   puts(ls);
}
