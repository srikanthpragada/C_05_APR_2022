// Print perfect numbers between 1 and 1000
#include <stdio.h>

void main()
{
  int  n, total, i;

     for(n = 1; n <= 1000000; n ++)
     {
        total = 0;
        for(i = 1; i <= n/2; i ++)
        {
             if (n % i == 0)  // factor
                 total += i;
        }

        // printf("%d %d\n", n, total);

        if(n == total)
           printf("%d ", n);
     }

}
