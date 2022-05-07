// Write marks into marks.dat
#include <stdio.h>

void main()
{
  FILE * fp;
  int n;

       fp = fopen("marks.dat", "wb");
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       while(1)
       {
          printf("Enter marks [-1 to stop]: ");
          scanf("%d", &n);
          if(n == -1)
             break;

          // write marks to file
          fwrite(&n, sizeof(n), 1, fp);
       }

       fclose(fp);
}
