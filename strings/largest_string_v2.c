// Take 5 strings and display the largest

#include <stdio.h>

void main()
{
  char st[30], ls[30];
  int i;

   strcpy(ls,"");   // ls[0] = '\0';

   while(1)
   {
     printf("Enter string [end to stop]:");
     gets(st);

     if (stricmp(st,"end") == 0)
         break;

     if (strcmp(st, ls) > 0)
        strcpy(ls, st);
   }

   puts(ls);
}
