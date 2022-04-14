// Print a number in reverse
#include <stdio.h>

void main()
{
  int  num;

     printf("Enter a number : ");
     scanf("%d",&num);

     while(num > 0)
     {
          printf("%d", num % 10); // right most digit
          num = num / 10;         // remove right most digit
     }
}
