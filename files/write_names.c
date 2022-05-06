
#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30];

       fp = fopen("names.txt", "at");

       while(1)
       {
          printf("Enter name [end to stop]: ");
          gets(name);

          if (strcmp(name,"end") == 0)
              break;

          fprintf(fp, "%s\n", name);
       }

       fclose(fp);
}
