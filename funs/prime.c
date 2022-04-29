#include <stdio.h>

int isprime(int n)
{
  int i;

      for(i = 2; i <= n/2 ; i ++)
      {
         if (n % i == 0)
           return 0; // false
      }

      return 1; // true
}

void main()
{
int i;

  for(i = 101; i < 200; i += 2)
  {
   if(isprime(i))
      printf("%d ",i);
  }
}
