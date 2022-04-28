#include <stdio.h>

void print_array(int arr[5])
{
 int i;

    for(i = 0; i < 5; i ++)
         printf("%5d", arr[i]);
}

void main()
{
  int a[] = {1,2,3,4,5};

     print_array(a);
}
