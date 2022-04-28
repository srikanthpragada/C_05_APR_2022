#include <stdio.h>

void reverse(int n)
{
   while(n > 0)
   {
      printf("%d", n % 10);
      n /= 10;
   }
}

void main()
{
     reverse(1234);
}
