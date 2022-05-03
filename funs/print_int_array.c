#include <stdio.h>
void fill(int a[], int len, int value);

void print_array(int arr[], int len)
{
 int i;

    for(i = 0; i < len; i ++)
         printf("%5d", arr[i]);
}

void main()
{
  int a[10] = {1,2,3,4,5};
  int b[] = {10,20,30,40,50,60};

     print_array(a, 10);
     print_array(b, 3);

}
