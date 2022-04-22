#include <stdio.h>

void main()
{
  int i;
  char ch;
  int  upper = 0, digit = 0, special = 0;

   printf("Enter password : ");

   for(i=1; i <= 8; i ++)
   {
       ch = getch();
       putch('*');
       if(isdigit(ch))
           digit = 1;
       else
        if(isupper(ch))
            upper = 1;
        else
            if (ch == '_' || ch == '*' || ch == '@')
                 special = 1;
   }

   if(upper && digit && special)
       puts("\nValid Password");
   else
   {
       if(!upper)
         printf("\nUppercase is missing!");

       if(!digit)
         printf("\nDigit is missing!");

       if(!special)
         printf("\nSpecial char is missing!");
   }

}
