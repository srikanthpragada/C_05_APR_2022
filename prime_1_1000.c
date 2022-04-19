// Display prime numbers from 1 to 1000
#include <stdio.h>

void main()
{
  int n, i, prime;

    for(n = 3; n < 1000; n += 2)
    {
     prime = 1;
     for(i = 2; i <= n/2 ; i ++)
     {
         if(n % i == 0)
         {
             prime = 0; // not prime
             break;
         }
     }

     if (prime)
         printf("%4d", n);
   }
}
