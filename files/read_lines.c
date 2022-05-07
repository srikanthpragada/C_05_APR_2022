// Print names that are longer than 5 chars
#include <stdio.h>

void main()
{
  FILE * fp;
  char line[30], *p;

       fp = fopen("names.txt", "rt");
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       while(1)
       {
           p = fgets(line,30,fp);
           if (p == NULL)  // EOF
            break;

           // line is with \n so it should be > 6
           if (strlen(line) > 6)
               printf("%s",line);
       }

       fclose(fp);
}
