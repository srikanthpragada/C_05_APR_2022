// Take a num and display whether it is prime

#include <stdio.h>

void main()
{
  int num, i, prime = 1;

     printf("Enter number : ");
     scanf("%d", &num);

     for(i = 2; i <= num/2 ; i ++)
     {
         if(num % i == 0)
         {
             prime = 0; // not prime
             printf("Not prime as %d is a factor", i);
             break;
         }
     }

     if (prime)
        printf("Prime");
}
