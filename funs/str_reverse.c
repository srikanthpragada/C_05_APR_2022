#include <stdio.h>

void string_reverse(char st[30])
{
 int i;

    for(i = strlen(st)-1; i >= 0; i --)
         putch(st[i]);
}

void main()
{
    char s[30]= "Hello";

    string_reverse(s);
}
