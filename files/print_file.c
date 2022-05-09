// Print lines with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char fname[50],line[100], *p;
  int lineno = 1;

       printf("Enter filename :");
       gets(fname);

       fp = fopen(fname, "rt");
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       while(1)
       {
           p = fgets(line,100,fp);
           if (p == NULL)  // EOF
            break;

           printf("%03d: %s",lineno, line);
           lineno ++;
       }

       fclose(fp);
}
