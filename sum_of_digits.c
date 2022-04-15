// Print sum of digits
#include <stdio.h>

void main()
{
  int  num, digit, sum  = 0;

     printf("Enter a number : ");
     scanf("%d",&num);

     while(num > 0)
     {
          digit = num % 10;
          sum += digit;
          num = num / 10;         // remove right most digit
     }

     printf("%d ", sum);
}
