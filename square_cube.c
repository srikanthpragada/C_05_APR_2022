// Display square and cube for the given number

#include <stdio.h>

void main()
{
  int num, square, cube;

     printf("Enter a number :");
     scanf("%d", &num);

     square = num * num;
     cube = num * num * num;

     printf("Square of %d is %d\nCube of %d is %d", num, square, num, cube);
}
