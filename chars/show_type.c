
#include <stdio.h>

void main()
{
    char ch;

       printf("Enter an alphabet :");
       ch = getche();

       if (ch >= 65 && ch <= 90)
           printf("Uppercase with code %d", ch);
       else
           printf("Lowercase with code %d", ch);
}
