// Print largest digit
#include <stdio.h>

void main()
{
  int  num, digit, largest = 0;

     printf("Enter a number : ");
     scanf("%d",&num);

     while(num > 0)
     {
          digit = num % 10;
          if(digit > largest)
             largest = digit;
          num = num / 10;         // remove right most digit
     }

     printf("%d", largest);

}
