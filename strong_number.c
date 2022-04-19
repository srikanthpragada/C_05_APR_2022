// Strong number
#include <stdio.h>

void main()
{
  int n, num, fact, digit, i, total = 0;

    num = n = 145;

    while(n > 0)
    {
        digit = n % 10;

        fact = 1;
        for(i = 2; i <= digit ; i ++)
              fact *= i;

        total += fact;
        n = n / 10;
    }

    // printf("%d", total);

    if(total == num)
         printf("Strong number");
    else
         printf("Not a strong number");

}
