#include <stdio.h>

int average(int arr[5])
{
 int i, total = 0;

    for(i = 0; i < 5; i ++)
        total += arr[i];

    return total / 5;

}

void main()
{
  int a[] = {11,22,35,46,15};

     printf("%d", average(a));
}
