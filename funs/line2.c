#include <stdio.h>

void line(int len, char ch)
{
int i;

   for(i = 1; i <= len ; i ++)
      putch(ch);
}

void main()
{
     line(10,'*');
}
