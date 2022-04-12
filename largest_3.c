// largest of 3 numbers

#include <stdio.h>

void main()
{
  int a = 10, b = 20, c = 15;

    if (a > b && a > c)
        printf("%d",a);
    else
       if(b > c)
         printf("%d",b);
       else
         printf("%d",c);
}
