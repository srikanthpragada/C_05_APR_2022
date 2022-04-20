#include <stdio.h>

void main()
{
  int i;
  char ch;
  int valid = 1;

   printf("Enter pin : ");

   for(i=1; i <= 4; i ++)
   {
       ch = getch();
       putch('*');
       if(!isdigit(ch))
           valid = 0;
   }

   if(valid)
    puts("\nValid Pin");
   else
    puts("\nInvalid Pin");
}
