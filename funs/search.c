#include <stdio.h>

void main()
{
   int arr1[] = {10,20,30,40,50,63,66,70,90,89};
   int arr2[] = {10,20,30,40,50,63,66,70,90,89};

   printf("Found at : %d\n", search(arr1,40));
   printf("Found at : %d\n", search(arr2,90));
}

int search(int a[10], int sn)
{
  int i;

      for(i = 0; i < 10 ; i ++)
      {
         if (a[i] == sn)
            return i;
      }

      return -1; // not found
}
