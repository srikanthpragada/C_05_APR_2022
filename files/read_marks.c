// Read marks from marks.dat
#include <stdio.h>

void main()
{
  FILE * fp;
  int n, count;

       fp = fopen("marks.dat", "rb");
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       while(1)
       {
          // read
          count = fread(&n, sizeof(n), 1, fp);
          if (count == 0)
             break;

          printf("%d\n", n);
       }

       fclose(fp);
}
