// Print common factors of 2 numbers
#include <stdio.h>

void main()
{
  int  n1, n2, smallest, i;

     printf("Enter two numbers : ");
     scanf("%d%d",&n1,&n2);

     smallest = n1 < n2 ? n1 : n2;

     for(i = 2; i <= smallest/2; i ++)
     {
        if(n1 % i == 0 && n2 % i == 0)
            printf("%d ", i);
     }
}
